# 03：関数を作る・呼び出す

関数は、名前を付けて何度も使える処理です。**引数**は渡す値、**返り値**は処理の結果です。

## 値を返す関数

```cpp
int cost(int price, int number) {
    return price * number;
}
```

- 最初の `int`：返す値の型。
- `cost`：関数の名前。
- `int price, int number`：受け取る値の名前と型。
- `return`：結果を返し、その関数の処理を終える。

呼び出すときは、名前の後ろに括弧を付けます。

```cpp
int total = cost(160, 4);  // total に640が入る
cout << total << "\n";
```

## 関数宣言と関数定義

```cpp
int cost(int price, int number);  // 宣言：名前と型を先に知らせる

int cost(int price, int number) { // 定義：処理を書く
    return price * number;
}
```

宣言の末尾は `;`、定義には処理を囲む `{ ... }` があります。定義より前から呼び出す場合は、先に宣言が必要です。

## 値を返さない関数

```cpp
void print_stars(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
}

// main の中で呼び出す
print_stars(3);           // *** と表示する。改行は付けない
```

`void` は返り値がないという意味です。表示することと、値を返すことは別です。

## この章の自作関数

| 関数 | すること | 定義ファイル |
| --- | --- | --- |
| `average(x, y)` | 2数の平均を返す | [functions.0.cpp](functions.0.cpp) |
| `multi(text, repeat)` | 文字列をrepeat回つなげて返す | [functions.0.cpp](functions.0.cpp) |
| `roll_die()` | 1〜6の乱数を返す。引数はない | [void.0.cpp](void.0.cpp) |
| `print_hello(name)` | あいさつを表示する | [void.0.cpp](void.0.cpp) |
| `f(x)`・`g(y)` | 呼び出しの流れを確認する。fの処理はファイルによって異なる | [function-call.0.cpp](function-call.0.cpp)、[function-call.1.cpp](function-call.1.cpp) |
| `area_circle(radius)` | 円の面積を返す | [area-circle.0.cpp](area-circle.0.cpp) |
| `print_circle_info(radius)` | 円の半径と面積を表示する | [area-circle.0.cpp](area-circle.0.cpp) |
| `add(u, v)` | 2次元ベクトルの和を返す | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `scale(r, v)` | 2次元ベクトルをr倍して返す | [2d-vector.0.cpp](2d-vector.0.cpp) |
| `info(v)` | ベクトルを表示用の文字列にする | [2d-vector.0.cpp](2d-vector.0.cpp) |

### 練習で作る関数

| 関数 | すること | 定義ファイル |
| --- | --- | --- |
| `cost(price, number)` | 代金を返す | [3.5.E1.cpp](3.5.E1.cpp) |
| `max(a, b)` | 大きい方の値を返す | [3.5.E2.cpp](3.5.E2.cpp) |
| `is_even(n)` | 偶数ならtrueを返す | [3.5.E3.cpp](3.5.E3.cpp) |
| `print_stars(n)` | *をn個表示する | [3.5.E4.cpp](3.5.E4.cpp) |
| `is_prime(n)` | 素数ならtrueを返す | [3.5.E5.cpp](3.5.E5.cpp) |
| `mean(ns)` | 配列の平均を返す。空の配列は渡さない | [3.5.A1.cpp](3.5.A1.cpp) |
| `scale(ns, k)` | 配列の全要素をk倍して返す | [3.5.A2.cpp](3.5.A2.cpp) |
| `index_of(ns, k)` | 最初に一致する位置を返す。なければ-1 | [3.5.A3.cpp](3.5.A3.cpp) |
| `count(ns, k)` | kと一致する要素の個数を返す | [3.5.A4.cpp](3.5.A4.cpp) |
| `indices(ns, k)` | kと一致する位置を配列にして返す | [3.5.A5.cpp](3.5.A5.cpp) |

**注意：** `scale(r, v)` と `scale(ns, k)` は引数の順序が逆です。別々のファイルで使う関数です。

## 配列を受け取る・返す

```cpp
vector<double> scale(vector<double> ns, double k) {
    for (int i = 0; i < ns.size(); i++) {
        ns[i] = ns[i] * k;
    }
    return ns;
}

// main の中で呼び出す
vector<double> a = {1, 2, 3};
vector<double> b = scale(a, 2.0); // bは{2, 4, 6}、aは{1, 2, 3}のまま
```

この書き方では関数に配列のコピーを渡します。結果を使うには、返された値を受け取ります。

## 関数の中から関数を呼ぶ

```cpp
vector<double> result = scale(7.0, add(u, v));
```

先に `add(u, v)` の結果を求め、その結果を `scale` に渡します。この例は [2d-vector.0.cpp](2d-vector.0.cpp) の関数です。

## 併せて使う機能

| 書き方 | 意味 |
| --- | --- |
| `to_string(x)` | 数値を文字列に変える |
| `ns.size()` | 配列の要素数を取得する |
| `ns[i]` | 0から数えてi番目の要素を使う |
| `result.push_back(i)` | 配列の末尾にiを追加する |
| `if (条件) { return 値; }` | 条件が成立したら、その場で結果を返す |
| `for (...) { ... }` | 各要素について繰り返す |

[void.0.cpp](void.0.cpp) の `random_device` と `uniform_int_distribution<int>` は乱数を作るための機能です。まずは `roll_die()` を呼ぶと1〜6が返る、と理解すれば読み進められます。

JavaScript版では `let cost = (price, number) => { return price * number; };` の形で関数を作っています。呼び出し方は同じ `cost(160, 4)` です。
