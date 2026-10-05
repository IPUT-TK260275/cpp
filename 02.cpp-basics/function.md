# 02 — C++の基礎：関数・構文一覧

このフォルダーの `.cpp` と比較用の `.js` に登場する項目をまとめています。C++の例は `using namespace std;` により `std::` を省略しています。

## C++の関数・メンバ関数

| 関数 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `main` | プログラムの開始点。`int main()` または `int main(void)` | [cout.0.cpp](cout.0.cpp) |
| `getline(cin, s)` | 標準入力を1行読み取り、文字列変数 `s` に格納する | [getline.0.cpp](getline.0.cpp) |
| `stoi(s)` | 文字列を `int` に変換する。`stoi(string("230"))` | [stoi.0.cpp](stoi.0.cpp)、[type-convertion.number.0.cpp](type-convertion.number.0.cpp) |
| `stod(s)` | 文字列を `double` に変換する。`stod(string("4.56"))` | [type-convertion.number.0.cpp](type-convertion.number.0.cpp) |
| `to_string(x)` | 数値を文字列に変換する | [type-conversion.string.0.cpp](type-conversion.string.0.cpp) |
| `abs(x)` | 絶対値。`abs(-2)` は `2` | [math-functions.0.cpp](math-functions.0.cpp) |
| `sqrt(x)` | 平方根。`sqrt(3.0)` | [math-functions.0.cpp](math-functions.0.cpp) |
| `pow(x, y)` | 累乗。`pow(2.0, 3.0)` は `8.0` | [math-functions.0.cpp](math-functions.0.cpp) |
| `floor(x)` | `x` 以下の最大の整数値を返す。`floor(9.5)` は `9.0` | [math-functions.0.cpp](math-functions.0.cpp) |
| `ceil(x)` | `x` 以上の最小の整数値を返す。`ceil(9.5)` は `10.0` | [math-functions.0.cpp](math-functions.0.cpp) |
| `log(x)` | 自然対数（底は `e`） | [math-functions.0.cpp](math-functions.0.cpp) |
| `s.length()` | 文字列の長さを取得する。`password.length()` | [string-length.0.cpp](string-length.0.cpp) |
| `s.substr(pos, count)` | 位置 `pos` から `count` 個の文字を取り出す。`id.substr(2, 6)` | [string-substr.0.cpp](string-substr.0.cpp) |
| `s.find(text, pos)` | 位置 `pos` 以降で文字列を検索する。見つかった先頭位置、または `string::npos` を返す | [string-find.0.cpp](string-find.0.cpp) |
| `v.size()` | ベクターの要素数を取得する | [vectors.1.cpp](vectors.1.cpp) |
| `v.push_back(x)` | ベクターの末尾に要素を追加する | [vector-push-back.0.cpp](vector-push-back.0.cpp) |

`length()`・`size()`・`find()` が返す位置や長さは符号なし整数型です。`string::npos` は「見つからない」を表す定数です。`string` の長さと位置はバイト単位で、UTF-8の日本語の文字数と一致するとは限りません。

## 入出力・型・構文

`cout`・`cin` はストリームオブジェクトです。`unitbuf`・`boolalpha`・`fixed`・`setprecision` は出力の設定に使うマニピュレーターです。

| 項目 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `#include <iostream>` | `cout`・`cin` を利用する | [cout.0.cpp](cout.0.cpp) |
| `#include <string>`・`<vector>` | 文字列・ベクターを利用する | [vectors.0.cpp](vectors.0.cpp) |
| `#include <cmath>`・`<iomanip>` | 数学関数・出力精度の設定を利用する | [math-functions.0.cpp](math-functions.0.cpp) |
| `using namespace std;` | 標準ライブラリの名前を `std::` なしで記述する | [cout.0.cpp](cout.0.cpp) |
| `cout << 値;` | 値を表示する。`<<` を続けて複数の値を表示できる | [cout.0.cpp](cout.0.cpp) |
| `cout << unitbuf << boolalpha;` | 出力を逐次フラッシュし、真理値を `true` / `false` で表示する | [init-name.1.cpp](init-name.1.cpp) |
| `cout << fixed << setprecision(15);` | 小数点以下15桁の固定小数点表記にする | [math-functions.0.cpp](math-functions.0.cpp) |
| `int`・`double`・`bool`・`string` | 整数・実数・真理値・文字列の型 | [init-name.1.cpp](init-name.1.cpp) |
| `true`・`false`・数値・`"..."` | 値の直接表記。`string("Alice")` は文字列オブジェクトを構築する | [init-name.1.cpp](init-name.1.cpp) |
| 変数宣言・初期化・代入 | `int a;`、`int a = 1;`、`a = 2;` | [assignment.0.cpp](assignment.0.cpp) |
| `vector<T>`・`vector<T> { ... }` | 同じ型の値を並べた可変長配列。`vector<int> {1, 10, 100}` | [vectors.1.cpp](vectors.1.cpp) |
| `v[i]`・`v[i] = 値;` | 0から始まる添字で要素を参照・更新する | [vectors.1.cpp](vectors.1.cpp) |
| `+ - * / %` | 算術演算。整数同士の `/` は整数の商、`%` は整数の余り | [init-name.0.cpp](init-name.0.cpp)、[vectors.0.cpp](vectors.0.cpp) |
| 文字列の `+` | 文字列を結合する。`string("pine") + string("apple")` | [string-concatenation.0.cpp](string-concatenation.0.cpp) |
| `== != < <= > >=` | 数値や文字列を比較する。文字列は辞書式に比較する | [number-comparison.0.cpp](number-comparison.0.cpp)、[string-comparison.0.cpp](string-comparison.0.cpp) |
| `if ... else if ... else` | 条件を順に調べて処理を分ける | [selection.0.cpp](selection.0.cpp) |
| `while (条件) { ... }` | 条件が成立する間、繰り返す | [iteration.0.cpp](iteration.0.cpp) |
| `return (0);` | `main` を正常終了する | [cout.0.cpp](cout.0.cpp) |
| `{ ... }`・`;`・コメント | ブロック、文の終端、`// ...`・`/* ... */` による注釈 | [iteration.0.cpp](iteration.0.cpp) |
| `\n`・`\"` | 文字列内の改行・二重引用符 | [string-substr.0.cpp](string-substr.0.cpp) |

`<map>` もコードの共通ヘッダーとして読み込まれていますが、このフォルダーでは `map` 型の変数や操作は使っていません。

## JavaScriptとの対応

| JavaScriptの関数 | 用途・C++との対応 | 使用ファイル |
| --- | --- | --- |
| `require("../lib.js")` | 学習用ライブラリを読み込む | [cout.0.js](cout.0.js) |
| `Lib.print(x)` | 値を表示する。C++では `cout << x;` | [cout.0.js](cout.0.js) |
| `Lib.input()` | 1行入力。C++では `getline(cin, s)` | [getline.0.js](getline.0.js) |
| `Number(s)` | 文字列を数値に変換する。C++では `stoi`・`stod` | [type-conversion.number.0.js](type-conversion.number.0.js) |
| `String(x)` | 値を文字列に変換する。数値のC++版は `to_string` | [type-conversion.string.0.js](type-conversion.string.0.js) |
| `Math.abs`・`sqrt`・`pow`・`floor`・`ceil`・`log` | 各数学関数。呼び出し時は全て `Math.` を付ける | [math-functions.0.js](math-functions.0.js) |
| `Lib.length(s)` / `Lib.length(a)` | 文字列の長さ・配列の要素数。C++では `.length()` / `.size()` | [string-length.0.js](string-length.0.js)、[vectors.1.js](vectors.1.js) |
| `Lib.slice(s, start, end)` | `start` 以上、`end` 未満の部分を切り出す。C++の `substr` の第2引数は長さ | [string-substr.0.js](string-substr.0.js) |
| `Lib.indexOf(s, text, start)` | 検索位置を返す。見つからないときは `-1` | [string-find.0.js](string-find.0.js) |
| `Lib.push(a, x)` | 配列末尾に要素を追加する。C++では `.push_back(x)` | [vector-push-back.0.js](vector-push-back.0.js) |

| JavaScriptの構文 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `"use strict";`・`const`・`let` | 厳格モード、変数の宣言・初期化 | [cout.0.js](cout.0.js)、[init-name.1.js](init-name.1.js) |
| `=`・`+ - * / %` | 代入・計算。文字列の `+` は結合 | [assignment.0.js](assignment.0.js)、[vectors.0.js](vectors.0.js) |
| `=== !== < <= > >=` | 等価比較・大小比較 | [number-comparison.0.js](number-comparison.0.js) |
| `[ ... ]`・`a[i]`・`a[i] = x` | 配列リテラル、要素参照・更新 | [vectors.1.js](vectors.1.js) |
| `if ... else`・`while` | 条件分岐・繰り返し | [selection.0.js](selection.0.js)、[iteration.0.js](iteration.0.js) |
| 未初期化の `let a;` | 変数の値は `undefined`。C++の未初期化の数値変数とは異なる | [assignment.0.js](assignment.0.js) |

JavaScriptの数値の `/` は整数の商に限定されません。文字列の長さ・添字はUTF-16のコード単位です。

## 練習問題の完成コード

| 問題 | 処理 | 主に使う関数・構文 |
| --- | --- | --- |
| [2.7.E1.cpp](2.7.E1.cpp) | 2商品の代金と合計を表示する | `getline`、`stoi`、`long long`、`1LL`、`cout` |
| [2.7.E2.cpp](2.7.E2.cpp) | 5数の平均を表示する | `getline`、`stod`、実数の加算・除算 |
| [2.7.E3.cpp](2.7.E3.cpp) | 分を時間と分に分ける | 整数の `/`・`%` |
| [2.7.E4.cpp](2.7.E4.cpp) | 3整数がすべて異なるかを判定する | `!=`、論理積 `&&`、`boolalpha` |
| [2.7.E5.cpp](2.7.E5.cpp) | 欠席と遅刻から出席要件を判定する | 整数除算、`+`、`<` |
| [2.7.E6.cpp](2.7.E6.cpp) | 3整数を小さい順に表示する | `if`、比較、変数の交換 |
| [2.7.E7.cpp](2.7.E7.cpp) | 奇数長の文字列の中央を表示する | `.length()`、`.substr()` |
| [2.7.E8.cpp](2.7.E8.cpp) | 7桁の数字を郵便番号の形式にする | `.substr()`、文字列の表示 |
| [2.7.E9.cpp](2.7.E9.cpp) | 教材の3条件でメールアドレス形式を判定する | `.find()`、`string::npos`、`string::size_type`、`&&` |
| [2.8.E1.cpp](2.8.E1.cpp) | 正の奇数を順に表示する | `for`、加算代入 `+=` |
| [2.8.E2.cpp](2.8.E2.cpp) | 各整数の階乗を表示する | 入れ子の `for`、文字列の `[]`、`to_string`、桁ごとの計算 |
| [2.8.E3.cpp](2.8.E3.cpp) | 第k行にkをk個、カンマ区切りで表示する | 入れ子の `for`、`if` |

追加した構文の意味は次のとおりです。

| 構文・型 | 意味・記述例 |
| --- | --- |
| `a != b && a != c && b != c` | 全条件が成立するかを調べる。`&&` は左側が偽なら右側を評価しない |
| `string::size_type at` | 文字列の位置・長さを扱う符号なし整数型。`.find()` の結果を受け取る |
| `long long`・`1LL` | 大きい整数を扱う型・その型のリテラル。乗算の途中から桁あふれしないよう `1LL * a * m` と書く |
| `k += 2` | `k` を2増やす |
| `'0'` | 文字リテラル。数字の文字と数値の相互変換に使う |
| `factorial[i] = '0' + digit % 10` | 計算した1桁を数字の文字に戻し、文字列内の要素を更新する |
| `for (...) { for (...) { ... } }` | 繰り返しの内側でも繰り返す |

`2.8.E2.cpp` は階乗を10進数の文字列として計算するため、20!を超えても整数型の桁あふれを起こしません。`2.7.E7.cpp` は教材の半角文字の例に合わせ、文字列をバイト単位で扱います。
