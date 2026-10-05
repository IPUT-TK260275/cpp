# 04：関連する値を構造体にまとめる

構造体は、名前や学籍番号など、関係する値をひとまとめにする仕組みです。

## 型を作る

```cpp
struct Student {
    string name;
    int id;
    string department;
    int grade;
    double gpa;
};
```

これで `Student` という型が使えます。中の `name` や `id` を**メンバ**と呼びます。最後の `;` を忘れないようにします。

## 値を作る・読む・変更する

```cpp
Student alice = {"Alice", 259999, "IT", 1, 3.25};
cout << alice.name;        // Alice
alice.grade = 2;           // 学年を変更する
```

初期値は、型を作ったときのメンバの順序に合わせます。

| 順序 | メンバ | 内容 |
| --- | --- | --- |
| 1 | `name` | 氏名 |
| 2 | `id` | 学籍番号 |
| 3 | `department` | 所属学科 |
| 4 | `grade` | 学年 |
| 5 | `gpa` | GPA |

`.` は「この変数の、このメンバ」を指定する記号です。

```cpp
Student bob;
bob = alice;              // aliceの全メンバをbobへコピーする
```

## 関数に渡す・関数から返す

```cpp
void print_student(Student s) {
    cout << s.name << "\n";
}

// main の中で呼び出す
print_student(alice);
```

名前・学籍番号・学科などを別々に渡す代わりに、`Student` 1つを渡せます。この書き方ではコピーを渡します。

構造体を作って返すこともできます。

```cpp
Student new_student(string name, int id, string department,
                    int grade, double gpa) {
    Student s = {name, id, department, grade, gpa};
    return s;
}
```

| この章の関数 | すること | 定義ファイル |
| --- | --- | --- |
| `print_student(name, id, department, grade, gpa)` | 5項目を受け取って表示する | [students.1.cpp](students.1.cpp)、[students.2.cpp](students.2.cpp) |
| `print_student(s)` | Studentを1つ受け取って表示する | [struct-with-functions.0.cpp](struct-with-functions.0.cpp) |
| `new_student(name, id, department, grade, gpa)` | Studentを作って返す | [struct-with-functions.0.cpp](struct-with-functions.0.cpp) |

## 複数人を配列に入れる

```cpp
vector<Student> students = {
    {"Alice", 259999, "IT", 1, 3.25},
    {"Bob",   259998, "DE", 2, 2.55}
};

for (int i = 0; i < students.size(); i++) {
    print_student(students[i]);
}
```

`vector<Student>` はStudentの配列です。`students[0]` がAlice、`students[1]` がBobです。

## 配列から削除する

```cpp
students.erase(students.begin() + 1); // 2番目の学生を削除する
```

| 書き方 | 意味 |
| --- | --- |
| `students.size()` | 学生の人数を取得する |
| `students.begin()` | 配列の先頭の位置を取得する |
| `students.begin() + 1` | 先頭から1つ先、つまり2番目の位置 |
| `students.erase(位置)` | その位置の要素を削除する |

削除すると、後ろの要素が前に詰まり、人数が1人減ります。

実際のコード：[メンバの操作](struct-student.0.cpp)・[初期化](struct-student.init.0.cpp)・[コピー](struct-student.assignment.0.cpp)・[配列と削除](struct-with-vectors.0.cpp)。
