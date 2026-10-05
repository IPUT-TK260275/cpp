# 04 — 構造体：関数・構文一覧

このフォルダーの `.cpp` に登場する関数と構文をまとめています。学生情報を別々の変数で扱う例から、`Student` 構造体・関数・ベクターを組み合わせる例へ進みます。

## 自作関数

| 関数の宣言 | 用途・呼び出し例 | 定義ファイル |
| --- | --- | --- |
| `void print_student(string name, int id, string department, int grade, double gpa);` | 5つの引数を受け取り、学生情報を表示する | [students.1.cpp](students.1.cpp)、[students.2.cpp](students.2.cpp) |
| `void print_student(Student s);` | 学生情報を1つの構造体として受け取り、表示する。`print_student(alice);` | [struct-with-functions.0.cpp](struct-with-functions.0.cpp)、[struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `Student new_student(string name, int id, string department, int grade, double gpa);` | 引数から `Student` を作って返す | [struct-with-functions.0.cpp](struct-with-functions.0.cpp) |
| `int main()` | プログラムの開始点 | [students.0.cpp](students.0.cpp) |

`print_student` の引数はファイルによって異なります。構造体を使う例では、5項目を `Student` 1つにまとめて渡します。

## 標準ライブラリのメンバ関数・入出力

| 項目 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `v.size()` | ベクターの要素数を取得する。`students.size()` | [students.2.cpp](students.2.cpp)、[struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `v.begin()` | ベクターの先頭要素を指すイテレーターを取得する | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `v.erase(位置)` | 指定位置の要素を削除する。`students.erase(students.begin() + 1);` | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `cout << 値` | 学生情報を標準出力に表示する | [students.0.cpp](students.0.cpp) |
| `cout << unitbuf << boolalpha;` | 出力を逐次フラッシュし、真理値を文字で表示する設定 | [struct-student.0.cpp](struct-student.0.cpp) |

`begin() + 1` は0から数えて第1要素、つまり2番目の要素の位置です。削除後は後続の要素が詰まり、要素数が1減ります。削除した位置以降のイテレーターや参照は無効になります。

## 構造体の構文

| 構文 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `struct 型名 { ... };` | 構造体型を定義する。末尾の `;` が必要 | [struct-student.0.cpp](struct-student.0.cpp) |
| メンバ変数の宣言 | `string name; int id; string department; int grade; double gpa;` | [struct-student.0.cpp](struct-student.0.cpp) |
| `Student alice;` | 構造体型の変数を宣言する | [struct-student.0.cpp](struct-student.0.cpp) |
| `alice.name = "Alice";` | `.` でメンバを指定して更新する | [struct-student.0.cpp](struct-student.0.cpp) |
| `cout << alice.name;` | `.` でメンバの値を参照する | [struct-student.0.cpp](struct-student.0.cpp) |
| `Student alice = { "Alice", 259999, "IT", 1, 3.25 };` | メンバの宣言順に値を並べて初期化する | [struct-student.init.0.cpp](struct-student.init.0.cpp) |
| `bob = alice;` | 構造体の各メンバの値をコピーする | [struct-student.assignment.0.cpp](struct-student.assignment.0.cpp) |
| `void print_student(Student s)` | 構造体を関数の仮引数にする。この例は値渡しなのでコピーを受け取る | [struct-with-functions.0.cpp](struct-with-functions.0.cpp) |
| `Student new_student(...)`・`return s;` | 構造体を関数の返り値にする | [struct-with-functions.0.cpp](struct-with-functions.0.cpp) |
| `vector<Student> students = { { ... }, { ... } };` | 構造体を要素とするベクターを作る | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `students[i]` | ベクターの第 `i` 要素の構造体を参照する。`print_student(students[i]);` | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |

### Studentのメンバ

| 宣言順 | メンバ | 型 | 内容 |
| --- | --- | --- | --- |
| 0 | `name` | `string` | 氏名 |
| 1 | `id` | `int` | 学籍番号 |
| 2 | `department` | `string` | 所属学科 |
| 3 | `grade` | `int` | 学年 |
| 4 | `gpa` | `double` | GPA |

## 共通の構文・型・演算

| 項目 | 用途・記述例 | 使用ファイル |
| --- | --- | --- |
| `#include <iostream>`・`<string>`・`<vector>` | 入出力・文字列・ベクターを利用するための宣言を読み込む | [students.2.cpp](students.2.cpp) |
| `using namespace std;` | 標準ライブラリの `std::` を省略する | [students.0.cpp](students.0.cpp) |
| `string`・`int`・`double` | 学生情報の各値の型 | [students.0.cpp](students.0.cpp) |
| `string name = "Alice";` | 文字配列リテラルから `string` を初期化する | [students.0.cpp](students.0.cpp) |
| `vector<string>`・`vector<int>`・`vector<double>` | 各項目を別々のベクターで管理する | [students.2.cpp](students.2.cpp) |
| 関数宣言・定義・呼び出し | `void print_student(...);`、関数ボディ、`print_student(...)` | [students.1.cpp](students.1.cpp) |
| `for (int i = 0; i < students.size(); i++)` | 全学生の情報を順に処理する。`<` で比較し、`++` で添字を増やす | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `begin() + 1` | イテレーターの位置を1要素先へ移す | [struct-with-vectors.0.cpp](struct-with-vectors.0.cpp) |
| `return 0;` | `main` を正常終了する | [students.0.cpp](students.0.cpp) |
| `{ ... }`・`;`・コメント・`\n` | ブロックや初期化子、文の終端、`// ...` による注釈、改行 | [struct-student.init.0.cpp](struct-student.init.0.cpp) |

コードでは `<map>` も読み込んでいますが、`map` の操作は使っていません。このフォルダーにはJavaScript版のコードはありません。
