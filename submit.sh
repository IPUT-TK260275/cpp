#!/usr/bin/env bash
# TLS で採点し、100点・全ケース正解のソースだけを提出する。
set -euo pipefail
SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
TLS_DIR="${SCRIPT_DIR}/.tls"
SUBMITTED_CACHE="${SCRIPT_DIR}/.submitted-full-score"
ACCESS_CHECK_URL="/toby/2026/cpp/challenge/access-check.txt"
SUBMIT_URL="/toby/2026/cpp/challenge/submit.cgi"
if [[ -z "${JOBS:-}" ]]; then
    JOBS="$(nproc 2>/dev/null || printf '2')"
    if [[ "$JOBS" -gt 8 ]]; then JOBS=8; fi
fi
DO_SUBMIT=1
ALL=0
TEMP_DIR=""
OWNER_PID="${BASHPID}"

SPINNER_PID=""
RESET=""; CYAN=""; GREEN=""; YELLOW=""; RED=""; DIM=""; BOLD=""
if [[ -z "${NO_COLOR:-}" && ( -t 1 || -n "${FORCE_COLOR:-}" ) ]]; then
    RESET=$'\033[0m'; CYAN=$'\033[36m'; GREEN=$'\033[32m'
    YELLOW=$'\033[33m'; RED=$'\033[31m'; DIM=$'\033[2m'; BOLD=$'\033[1m'
fi
say_status() {
    local state="$1" color="$CYAN"
    shift
    case "$state" in
        100|sent) color="$GREEN" ;;
        skip) color="$YELLOW" ;;
        fail|ERROR) color="$RED" ;;
    esac
    printf '%s[%s]%s %s\n' "$color" "$state" "$RESET" "$*"
}
progress() {
    local done="$1" total="$2" label="$3" width=28 filled empty bar rest
    filled=$((done * width / total)); empty=$((width - filled))
    printf -v bar '%*s' "$filled" ''; bar="${bar// /=}"
    printf -v rest '%*s' "$empty" ''; rest="${rest// /.}"
    printf '%s[%s%s]%s %3d%% %d/%d  %s' "$CYAN" "$bar" "$rest" "$RESET" \
        "$((100 * done / total))" "$done" "$total" "$label"
}
start_spinner() {
    local label="$1" grading="${2:-0}"
    # ログへのリダイレクトでは制御文字も更新アニメーションも出さない。
    if [[ ! -t 1 || -n "${NO_ANIMATION:-}" ]]; then
        say_status run "$label"
        return
    fi
    printf '\033[?25l'
    (
        trap - EXIT INT TERM
        local frames=('▱▱▱▱▱' '▰▱▱▱▱' '▰▰▱▱▱' '▰▰▰▱▱' '▰▰▰▰▱' '▰▰▰▰▰' '▱▰▰▰▰' '▱▱▰▰▰' '▱▱▱▰▰' '▱▱▱▱▰')
        local frame=0 count file
        while true; do
            printf '\r\033[2K%s%s%s ' "$CYAN" "${frames[frame % ${#frames[@]}]}" "$RESET"
            if [[ "$grading" -eq 1 ]]; then
                count=0
                for file in "$TEMP_DIR"/*.status; do
                    if [[ -f "$file" ]]; then count=$((count + 1)); fi
                done
                progress "$count" "${#IDS[@]}" "$label"
            else
                printf '%s' "$label"
            fi
            frame=$((frame + 1))
            sleep 0.12
        done
    ) &
    SPINNER_PID="$!"
}
stop_spinner() {
    if [[ -n "$SPINNER_PID" ]]; then
        kill "$SPINNER_PID" 2>/dev/null || true
        wait "$SPINNER_PID" 2>/dev/null || true
        SPINNER_PID=""
        printf '\r\033[2K\033[?25h'
    fi
}
banner() {
    printf '\n%s+--------------------------------------------------+%s\n' "$CYAN" "$RESET"
    printf '%s  TLS Auto Submit%s  %s満点の答案だけ提出%s\n' "$BOLD" "$RESET" "$DIM" "$RESET"
    if [[ "$DO_SUBMIT" -eq 0 ]]; then
        printf '  モード: 採点のみ（送信なし）\n'
    else
        printf '  モード: 採点 → 100点確認 → 送信\n'
    fi
    printf '  対象: %d問  /  並列採点: %s\n' "${#IDS[@]}" "$JOBS"
    printf '%s+--------------------------------------------------+%s\n\n' "$CYAN" "$RESET"
}
summary() {
    printf '\n%s+---------------- 結果 ----------------------------+%s\n' "$CYAN" "$RESET"
    printf '  満点       %s%d/%d%s\n' "$GREEN" "$PERFECT_COUNT" "${#IDS[@]}" "$RESET"
    printf '  満点未達   %s%d%s\n' "$YELLOW" "$GRADE_FAILED_COUNT" "$RESET"
    if [[ "$DO_SUBMIT" -eq 1 ]]; then
        printf '  提出成功   %s%d%s\n' "$GREEN" "$SENT_COUNT" "$RESET"
        printf '  提出済み   %s%d%s\n' "$YELLOW" "$SKIPPED_COUNT" "$RESET"
        printf '  送信失敗   %s%d%s\n' "$RED" "$SEND_FAILED_COUNT" "$RESET"
    fi
    printf '%s+--------------------------------------------------+%s\n' "$CYAN" "$RESET"
}

usage() {
    cat <<'EOF'
使い方:
  ./submit.sh                            # 全問題を採点し、満点だけ提出
  ./submit.sh --all                      # 同上
  ./submit.sh --check-all                # 全問題を採点（送信なし）
  ./submit.sh 問題ID ソースファイル       # 指定した問題を採点・提出
  ./submit.sh --check 問題ID ソースファイル # 指定した問題を採点のみ
  ./submit.sh --jobs 4 --check-all        # 最大4問題を並列採点
既定ではCPU数に応じて最大8問を並列採点し、空いた枠へ次の問題を投入します。
同じ問題に .cpp と .js がある場合、一括処理では .cpp を優先します。
提出成功の履歴は .submitted-full-score に記録し、同じ問題の再提出を省略します。
採点失敗・満点未達・送信失敗の場合、終了コードは1です。
NO_COLOR=1 で色を、NO_ANIMATION=1 でアニメーションを無効にできます。
EOF
}
fail() { say_status ERROR "$*" >&2; return 1; }
cleanup() {
    if [[ "${BASHPID}" == "$OWNER_PID" ]]; then
        stop_spinner
        if [[ -n "$TEMP_DIR" ]]; then rm -rf -- "$TEMP_DIR"; fi
    fi
}
trap cleanup EXIT
trap 'exit 130' INT
trap 'exit 143' TERM

valid_id() { [[ "$1" =~ ^[0-9]+\.[0-9]+\.[AE][0-9]+$ ]]; }
recorded() {
    [[ -f "$SUBMITTED_CACHE" ]] &&
        awk -F '\t' -v id="$1" '$1 == id {found=1} END {exit !found}' "$SUBMITTED_CACHE"
}
full_score() {
    local work="$TLS_DIR/problems/$1" score result count
    [[ -f "$work/score.txt" && -f "$work/test_result.txt" ]] || return 1
    score="$(cat "$work/score.txt")"
    result="$(cat "$work/test_result.txt")"
    [[ "$score" == 100 && "$result" =~ ^1+$ ]] || return 1
    count="$(find "$work/judge" -mindepth 1 -maxdepth 1 -type d | wc -l)" || return 1
    [[ "${#result}" -eq "$count" && "$count" -gt 0 ]]
}
grade() {
    local id="$1" source="$2" work="$TLS_DIR/problems/$1"
    local scripts="$TLS_DIR/scripts/problems" init checker snapshot
    init="$scripts/$id-init.sh"
    [[ -f "$init" ]] || { fail "採点対象の問題がありません: $id"; return 1; }
    [[ -f "$source" ]] || { fail "ファイルがありません: $source"; return 1; }
    case "$source" in
        *.cpp) checker="$scripts/check.default.sh" ;;
        *.js) checker="$scripts/check.js.sh" ;;
        *) fail '.cpp または .js を指定してください。'; return 1 ;;
    esac
    if [[ ! -d "$work" || "$init" -nt "$work" ]]; then
        bash "$init" || return 1
    fi
    # 前回100点だった結果が残っていても、今回は必ず採点し直す。
    rm -f -- "$work/score.txt" "$work/test_result.txt"
    snapshot="$TEMP_DIR/$id.${source##*.}"
    cp -- "$source" "$snapshot" || return 1
    if [[ -f "$scripts/$id-check.sh" ]]; then
        bash "$scripts/$id-check.sh" "$snapshot" || return 1
    else
        bash "$checker" "$id" "$snapshot" || return 1
    fi
    full_score "$id" || return 1
    cmp -s -- "$snapshot" "$work/code.txt" || return 1
    cmp -s -- "$snapshot" "$source" || { fail "採点中にソースが変更されました: $source"; return 1; }
}
ensure_login() {
    if [[ -f "$TLS_DIR/data/auth" ]] &&
        timeout 5s node "$TLS_DIR/scripts/access-check.js" "$ACCESS_CHECK_URL"; then
        return 0
    fi
    bash "$TLS_DIR/scripts/set-account.sh" "$ACCESS_CHECK_URL"
}
submit() {
    local id="$1" source="$2"
    if recorded "$id"; then
        say_status skip "$id は満点で提出済みです。"
        return 0
    fi
    full_score "$id" || { fail "$id: 満点ではないため送信しません。"; return 1; }
    cmp -s -- "$source" "$TLS_DIR/problems/$id/code.txt" || {
        fail "$id: 採点後にソースが変更されたため送信しません。"; return 1;
    }
    # 送信成功の場合だけ履歴を記録する。送信失敗時は次回再試行できる。
    start_spinner "$id を送信中…"
    local send_status=0
    timeout 15s node "$TLS_DIR/scripts/submit.js" "$id" "$SUBMIT_URL" > "$TEMP_DIR/$id.submit.log" 2>&1 || send_status=$?
    stop_spinner
    cat "$TEMP_DIR/$id.submit.log"
    [[ "$send_status" -eq 0 ]] || return 1
    printf '%s\t%s\t%s\n' "$id" "$(TZ=Asia/Tokyo date '+%Y-%m-%dT%H:%M:%S%z')" "$source" >> "$SUBMITTED_CACHE"
    say_status sent "$id を提出しました。"
}
discover() {
    local ext file id
    local -A seen=()
    for ext in cpp js; do
        while IFS= read -r -d '' file; do
            id="$(basename -- "$file" ".$ext")"
            valid_id "$id" || continue
            [[ -f "$TLS_DIR/scripts/problems/$id-init.sh" ]] || continue
            [[ -z "${seen[$id]:-}" ]] || continue
            seen[$id]=1
            printf '%s\0%s\0' "$id" "$file"
        done < <(find "$SCRIPT_DIR" \( -name .git -o -name .tls -o -name .tls.0 -o -name tests \) -prune -o -type f -name "*.$ext" -print0 | sort -zV)
    done
}

POSITIONAL=()
while [[ "$#" -gt 0 ]]; do
    case "$1" in
        --help|-h) usage; exit 0 ;;
        --all) ALL=1; shift ;;
        --check-all) ALL=1; DO_SUBMIT=0; shift ;;
        --check) DO_SUBMIT=0; shift ;;
        --jobs|-j)
            [[ "$#" -ge 2 ]] || { usage >&2; exit 2; }
            JOBS="$2"; shift 2 ;;
        --*) fail "不明なオプション: $1"; exit 2 ;;
        *) POSITIONAL+=("$1"); shift ;;
    esac
done
[[ "$JOBS" =~ ^[1-9][0-9]*$ ]] || { fail '--jobs は正の整数を指定してください。'; exit 2; }
if [[ "${#POSITIONAL[@]}" -eq 0 ]]; then
    ALL=1
elif [[ "${#POSITIONAL[@]}" -ne 2 || "$ALL" -eq 1 ]]; then
    usage >&2; exit 2
fi
# 既存TLSは ~/cpp/.tls を参照するため、異なる場所での誤採点を防ぐ。
[[ "$(realpath -- "$SCRIPT_DIR")" == "$(realpath -- "$HOME/cpp")" ]] || {
    fail 'このスクリプトは ~/cpp に配置してください。'; exit 1;
}
[[ -d "$TLS_DIR/scripts/problems" ]] || { fail '.tls の採点スクリプトがありません。'; exit 1; }
exec 9> "$TLS_DIR/.submit.lock"
flock -n 9 || { fail '別の submit.sh が実行中です。'; exit 1; }
TEMP_DIR="$(mktemp -d)"
IDS=()
SOURCES=()
if [[ "$ALL" -eq 1 ]]; then
    while IFS= read -r -d '' id && IFS= read -r -d '' source; do
        IDS+=("$id"); SOURCES+=("$source")
    done < <(discover)
else
    valid_id "${POSITIONAL[0]}" || { fail '問題IDの形式が正しくありません。'; exit 2; }
    IDS+=("${POSITIONAL[0]}")
    SOURCES+=("$(realpath -- "${POSITIONAL[1]}")")
fi
[[ "${#IDS[@]}" -gt 0 ]] || { fail '採点対象のファイルがありません。'; exit 1; }
banner
start_spinner '採点中…' 1
# 各問題の結果は別ディレクトリに保存される。送信は採点後に順次行う。
# 終了した問題の枠だけを回収し、他の問題の終了を待たずに次を開始する。
declare -A ACTIVE=()
NEXT=0
COMPLETED=0
TOTAL="${#IDS[@]}"
while [[ "$COMPLETED" -lt "$TOTAL" ]]; do
    while [[ "${#ACTIVE[@]}" -lt "$JOBS" && "$NEXT" -lt "$TOTAL" ]]; do
        i="$NEXT"
        (
            status=fail
            if grade "${IDS[$i]}" "${SOURCES[$i]}" > "$TEMP_DIR/$i.log" 2>&1; then
                status=ok
            fi
            # 完成した結果だけを親と進捗表示に公開する。
            printf '%s\n' "$status" > "$TEMP_DIR/$i.status.tmp"
            mv -- "$TEMP_DIR/$i.status.tmp" "$TEMP_DIR/$i.status"
        ) &
        ACTIVE["$!"]="$i"
        NEXT=$((NEXT + 1))
    done
    MADE_PROGRESS=0
    for pid in "${!ACTIVE[@]}"; do
        i="${ACTIVE[$pid]}"
        if [[ -f "$TEMP_DIR/$i.status" ]] || ! kill -0 "$pid" 2>/dev/null; then
            wait "$pid" || true
            unset 'ACTIVE[$pid]'
            COMPLETED=$((COMPLETED + 1))
            MADE_PROGRESS=1
        fi
    done
    if [[ "$MADE_PROGRESS" -eq 0 ]]; then sleep 0.05; fi
done
stop_spinner
progress "${#IDS[@]}" "${#IDS[@]}" '採点完了'
printf '\n\n'
FAILED=0
LOGGED_IN=0
PERFECT_COUNT=0
GRADE_FAILED_COUNT=0
SENT_COUNT=0
SKIPPED_COUNT=0
SEND_FAILED_COUNT=0
for i in "${!IDS[@]}"; do
    id="${IDS[$i]}"
    if [[ ! -f "$TEMP_DIR/$i.status" || "$(cat "$TEMP_DIR/$i.status")" != ok ]]; then
        say_status fail "$id: 満点を確認できないため送信しません。"
        GRADE_FAILED_COUNT=$((GRADE_FAILED_COUNT + 1))
        cat "$TEMP_DIR/$i.log"
        FAILED=1
        continue
    fi
    say_status 100 "$id: 全ケース正解"
    PERFECT_COUNT=$((PERFECT_COUNT + 1))
    if [[ "$DO_SUBMIT" -eq 0 ]]; then continue; fi
    if ! recorded "$id" && [[ "$LOGGED_IN" -eq 0 ]]; then
        ensure_login || { fail '認証に失敗しました。'; exit 1; }
        LOGGED_IN=1
    fi
    WAS_RECORDED=0
    if recorded "$id"; then WAS_RECORDED=1; fi
    if ! submit "$id" "${SOURCES[$i]}"; then
        fail "$id の送信に失敗しました。" || true
        FAILED=1
        SEND_FAILED_COUNT=$((SEND_FAILED_COUNT + 1))
    elif [[ "$WAS_RECORDED" -eq 1 ]]; then
        SKIPPED_COUNT=$((SKIPPED_COUNT + 1))
    else
        SENT_COUNT=$((SENT_COUNT + 1))
    fi
done
summary
exit "$FAILED"
