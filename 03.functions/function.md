# 03 — 関数：関数・構文一覧

このフォルダーのコードに登場する自作関数、標準ライブラリの機能、関数を作る構文をまとめています。同名の関数でも、ファイルごとに定義や引数の順序が異なる場合があります。

## 自作関数

| 関数の宣言 | 用途・呼び出し例 | 定義ファイル |
| --- | --- | --- |
| `double average(double x, double y);` | 2数の平均を返す。`average(2, 3)` は `2.5` | [functions.0.cpp](functions.0.cpp) |
| `string multi(string text, int repeat);` | 文字列を指定回数繰り返して結合する。`multi("Zawa ", 2)` | [functions.0.cpp](functions.0.cpp) |
| `int roll_die();` | 1〜6の乱数を返す。引数なしで `roll_die()` と呼ぶ | [void.0.cpp](void.0.cpp) |
| `void print_hello(string name);` | あいさつを表示する。返り値はない | [void.0.cpp](void.0.cpp) |
| `int f(int x);` | `x + 1` を返す。`f(2)` は `3` | [function-call.0.cpp](function-call.0.cpp) |
| `int f(int x);` | `g(x + 2) + 1` を返す。`f(2)` は `9` | [function-call.1.cpp](function-call.1.cpp) |
| `int g(int y);` | `y * 2` を返す。`g(5)` は `10` | [function-call.0.cpp](function-call.0.cpp)、[function-call.1.cpp](function-call.1.cpp) |
| `double area_circle(double radius);` | 半径から円の面積を計算する | [area-circle.0.cpp](area-circle.0.cpp) |
| `void print_circle_info(double radius)` | 半径と円の面積を表示する | [area-circle.0.cpp](area-circle.0.cpp) |
| `vector<double> add(vector<double> u, vector<double> v);` | 2次元ベクトルの各成分を加算して返す | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `vector<double> scale(double r, vector<double> v);` | 2次元ベクトルを `r` 倍する。`scale(6.0, a)` | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `string info(vector<double> v);` | 2次元ベクトルを `"(x, y)"` の形式の文字列にする | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `int cost(int price, int number);` | 単価と個数の積を返す。`cost(160, 4)` は `640` | [3.5.E1.cpp](3.5.E1.cpp) |
| `vector<double> scale(vector<double> ns, double k);` | 全要素を `k` 倍したベクターを返す。`scale(v0, 1.5)` | [3.5.A2.cpp](3.5.A2.cpp) |
| `int main()` | プログラムの開始点 | [functions.0.cpp](functions.0.cpp) |

`2d-vector.0.cpp` の `scale` は **倍率、ベクトル** の順、`3.5.A2.cpp` の `scale` は **ベクター、倍率** の順です。これらは別々のプログラムで使われています。

## 標準ライブラリの関数・オブジェクト

| 項目 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `string("...")` | 文字列オブジェクトの構築 | [functions.0.cpp](functions.0.cpp) |
| `to_string(x)` | 数値を文字列に変換する | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `ns.size()` | ベクターの要素数を取得する | [3.5.A2.cpp](3.5.A2.cpp) |
| `random_device rd;` | 乱数を供給するオブジェクトを作る | [void.0.cpp](void.0.cpp) |
| `uniform_int_distribution<int> dist(1, 6);` | 1〜6を範囲とする一様な整数分布を作る。両端を含む | [void.0.cpp](void.0.cpp) |
| `dist(rd)` | 分布オブジェクトを関数のように呼び、乱数を取得する | [void.0.cpp](void.0.cpp) |
| `cout << ...` | 値を標準出力に表示する | [functions.0.cpp](functions.0.cpp) |
| `unitbuf`・`boolalpha` | 出力の逐次フラッシュ・真理値の文字表示 | [3.5.E1.cpp](3.5.E1.cpp) |

## C++の構文

| 構文 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `#include <...>` | `<iostream>`・`<string>`・`<vector>` などの宣言を読み込む。乱数には `<random>` | [void.0.cpp](void.0.cpp) |
| `using namespace std;` | 標準ライブラリの `std::` を省略する | [functions.0.cpp](functions.0.cpp) |
| 関数宣言 | `double average(double x, double y);`。名前・引数の型・返り値の型を知らせる | [functions.0.cpp](functions.0.cpp) |
| 関数定義 | `int cost(int price, int number) { return price * number; }`。実際の処理を書く | [3.5.E1.cpp](3.5.E1.cpp) |
| 関数呼び出し | `cost(160, 4)`。括弧内の引数を仮引数へ渡す | [3.5.E1.cpp](3.5.E1.cpp) |
| 引数なしの関数 | 宣言は `int roll_die();`、呼び出しは `roll_die()` | [void.0.cpp](void.0.cpp) |
| `void` | 返り値がない関数の返り値型 | [void.0.cpp](void.0.cpp) |
| `return 式;` | 値を返して、その関数の実行を終了する | [functions.0.cpp](functions.0.cpp) |
| `return 0;` | `main` を正常終了する | [3.5.E1.cpp](3.5.E1.cpp) |
| 呼び出しの入れ子 | `scale(7.0, add(c, d))`。内側の返り値を外側の引数として使う | [2d-vector.0.cpp](2d-vector.0.cpp) |
| 値渡し | `vector<double> ns` などの仮引数は値のコピーを受け取る。`scale` 内で `ns` を更新しても呼び出し元のベクターは変わらない | [3.5.A2.cpp](3.5.A2.cpp) |
| 型・変数宣言・代入 | `int`・`double`・`string`・`vector<double>`、`double radius, area;`、`radius = 2.0;` | [area-circle.1.cpp](area-circle.1.cpp) |
| `vector<double> v = { ... };`・`v[i]` | ベクターの初期化・要素参照・更新 | [2d-vector.0.cpp](2d-vector.0.cpp)、[3.5.A2.cpp](3.5.A2.cpp) |
| `for (初期化; 条件; 更新)`・`++` | 指定回数や全要素について繰り返す | [functions.0.cpp](functions.0.cpp) |
| `+ * /`・文字列の `+` | 数値計算・文字列結合 | [functions.0.cpp](functions.0.cpp) |
| `<`・`==` | ループ条件・計算結果の比較 | [3.5.A2.cpp](3.5.A2.cpp) |
| `{ ... }`・`;`・コメント・`\n` | ブロック、文の終端、注釈、文字列内の改行 | [functions.0.cpp](functions.0.cpp) |

コードでは `<map>` も読み込んでいますが、`map` の操作は使っていません。

## JavaScript版

[3.5.E1.js](3.5.E1.js) では次の関数・構文を使っています。

| 関数・構文 | 用途・記述例 |
| --- | --- |
| `require("../lib.js")` | 学習用ライブラリを読み込む |
| `Lib.print(x)` | 値を表示する |
| `let cost = (price, number) => { ... };` | アロー関数を作り、変数 `cost` に割り当てる |
| `return price * number;` | 積を返す |
| `cost(160, 4)` | 関数呼び出し |
| `===` | 結果と期待値を型変換なしで比較する |
| `"use strict";`・`const`・`let`・`{ ... }` | 厳格モード、変数宣言、ブロック |

## 練習問題の関数一覧（全10問）

| 問題 | 関数の宣言 | 処理 |
| --- | --- | --- |
| [3.5.E1.cpp](3.5.E1.cpp) | `int cost(int price, int number);` | 単価と個数の積を返す |
| [3.5.E2.cpp](3.5.E2.cpp) | `double max(double a, double b);` | 大きい方の数値を返す |
| [3.5.E3.cpp](3.5.E3.cpp) | `bool is_even(int n);` | 偶数かどうかを返す |
| [3.5.E4.cpp](3.5.E4.cpp) | `void print_stars(int n);` | 改行を付けずにアスタリスクをn個表示する |
| [3.5.E5.cpp](3.5.E5.cpp) | `bool is_prime(int n);` | 素数かどうかを返す |
| [3.5.A1.cpp](3.5.A1.cpp) | `double mean(vector<double> ns);` | 長さ1以上のベクターの平均を返す |
| [3.5.A2.cpp](3.5.A2.cpp) | `vector<double> scale(vector<double> ns, double k);` | 全要素をk倍したベクターを返す |
| [3.5.A3.cpp](3.5.A3.cpp) | `int index_of(vector<int> ns, int k);` | 最初に一致した添字を返す。なければ `-1` |
| [3.5.A4.cpp](3.5.A4.cpp) | `int count(vector<int> ns, int k);` | 一致する要素の個数を返す |
| [3.5.A5.cpp](3.5.A5.cpp) | `vector<int> indices(vector<int> ns, int k);` | 一致する添字を小さい順に格納したベクターを返す |

`max`・`count` はこの教材で自分で定義する関数です。標準ライブラリにも同名の関数がありますが、ここでは表に示した引数と返り値の型で実装しています。

| 練習で追加された構文・操作 | 用途・使用例 |
| --- | --- |
| `if (条件) { return 値; }` | 条件が成立したらその場で値を返す。`index_of` は最初の一致で終了する |
| `%`・`==`・`>=` | 偶奇、割り切れるか、大小の判定 |
| `n / i` | 素数判定のループ上限に使う。`i * i` の整数の桁あふれを避ける |
| `sum += ns[i];` | 各要素を合計へ加える |
| `total++;` | 一致した個数を1増やす |
| `result.push_back(i);` | 一致した添字をベクター末尾へ追加する |
| `return -1;` | 要素が見つからないことを返り値で示す |
| `vector<int> result;` | 空のベクターを作る。該当する添字がなければ空のまま返す |
