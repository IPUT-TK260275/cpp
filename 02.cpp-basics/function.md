# 02：C++の基本の書き方

## まず使う形

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    // ここに処理を書く
    return 0;
}
```

`#include` は必要な機能を使うための準備です。`main` の中に処理を書きます。`boolalpha` は真理値を `true`・`false` で表示する設定です。

## 入力する・表示する

```cpp
string line;
getline(cin, line);         // 1行を文字列として読み取る
int n = stoi(line);         // 文字列を整数に変える
cout << n << "\n";         // 表示して改行する
```

| 関数 | 何をするか | 例 |
| --- | --- | --- |
| `getline(cin, s)` | 入力した1行を `s` に入れる | 名前など、空白を含む入力にも使える |
| `stoi(s)` | 文字列を整数に変える | `stoi("123")` → `123` |
| `stod(s)` | 文字列を小数に変える | `stod("3.14")` → `3.14` |
| `to_string(x)` | 数値を文字列に変える | `to_string(123)` → `"123"` |

## 変数を作る・計算する

```cpp
int age = 18;              // 整数
long long total = 10000;   // 大きな整数
double height = 157.5;     // 小数
bool married = false;     // true または false
string name = "Alice";    // 文字列
age = 19;                 // 値を変更する
```

| 記号 | 意味 | 例 |
| --- | --- | --- |
| `+ - * /` | 足す・引く・掛ける・割る | `7 / 2` → `3`、`7.0 / 2` → `3.5` |
| `%` | 整数の割り算の余り | `7 % 2` → `1` |
| `== !=` | 等しい・等しくない | `age == 18` |
| `< <= > >=` | 小さい・以下・大きい・以上 | `age >= 18` |
| `&&` | 両方の条件が成立する | `a != b && a != c` |

文字列同士の `+` は結合です。教材の `string("Alice")` も、文字列を作る書き方です。

## 文字列を調べる・切り取る

```cpp
string s = "abcdefg";
cout << s.length();        // 長さ：7
cout << s.substr(2, 3);    // 位置2から3文字：cde
```

位置は **0から** 数えます。`substr(開始位置, 文字数)` の第2引数は終了位置ではありません。

```cpp
string s = "Alice Bob";
string::size_type pos = s.find(" "); // 空白の位置を探す
if (pos != string::npos) {           // 見つかったとき
    cout << s.substr(0, pos);         // Alice
}
```

`string::npos` は「見つからなかった」という結果です。ここでの長さ・位置はバイト単位なので、日本語では見た目の文字数と一致しない場合があります。

## 配列（vector）を使う

```cpp
vector<int> a = {1, 10, 100};
cout << a[0];             // 最初の要素：1
a[0] = 2;                 // 最初の要素を変更する
a.push_back(1000);        // 末尾に追加する
cout << a.size();         // 要素の個数：4
```

添字は0から始まります。`a.size()` が4なら、使える添字は0〜3です。

## 条件分岐・繰り返し

```cpp
if (points >= 90) {
    cout << "S";
} else if (points >= 80) {
    cout << "A";
} else {
    cout << "80点未満";
}
```

```cpp
int i = 0;
while (i < 3) {           // 条件が成立する間、繰り返す
    cout << i << "\n";
    i = i + 1;
}

for (int k = 1; k <= 5; k++) { // 1〜5を順に表示する
    cout << k << "\n";
}
```

`k++` は1増やす、`k += 2` は2増やす書き方です。

## 数学関数

`#include <cmath>` を追加して使います。

| 関数 | 意味 | 例 |
| --- | --- | --- |
| `abs(x)` | 絶対値 | `abs(-2)` → `2` |
| `sqrt(x)` | 平方根 | `sqrt(9.0)` → `3.0` |
| `pow(x, y)` | xのy乗 | `pow(2.0, 3.0)` → `8.0` |
| `floor(x)` | x以下の最大の整数値 | `floor(9.5)` → `9.0` |
| `ceil(x)` | x以上の最小の整数値 | `ceil(9.5)` → `10.0` |
| `log(x)` | 自然対数（底はe） | `log(1.0)` → `0.0` |

小数点以下の表示桁数を指定する例：

```cpp
// #include <iomanip> が必要
cout << fixed << setprecision(15);
```

## JavaScript版との対応

| C++ | JavaScript |
| --- | --- |
| `cout << x;` | `Lib.print(x);` |
| `getline(cin, s);` | `let s = Lib.input();` |
| `stoi(s)`・`stod(s)` | `Number(s)` |
| `to_string(x)` | `String(x)` |
| `s.length()`・`a.size()` | `Lib.length(s)`・`Lib.length(a)` |
| `s.substr(start, count)` | `Lib.slice(s, start, start + count)` |
| `s.find(text, start)` | `Lib.indexOf(s, text, start)`（見つからないときは `-1`） |
| `a.push_back(x)` | `Lib.push(a, x)` |
| `sqrt(x)` など | `Math.sqrt(x)` など |
| `==`・`!=` | `===`・`!==` |

実際のコード：[入力](stoi.0.cpp)・[文字列](string-substr.0.cpp)・[vector](vectors.1.cpp)・[for文](2.8.E1.cpp)。
