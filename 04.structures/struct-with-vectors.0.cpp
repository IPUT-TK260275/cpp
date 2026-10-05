#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// 構造体型 Student の定義
struct Student {
    string name;       // 氏名
    int id;            // 学生番号
    string department; // 所属学科
    int grade;         // 学年
    double gpa;        // GPA
};
// 関数宣言
void print_student(Student s);
// 関数定義
void print_student(Student s) {
    cout << "Name: " << s.name << ", ";
    cout << "ID: " << s.id << ", ";
    cout << "Dept: " << s.department << ", ";
    cout << "Grade: " << s.grade << ", ";
    cout << "GPA: " << s.gpa << "\n";
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    // Student 型の vector を生成して初期化する
    vector<Student> students = {
        { "Alice", 259999, "IT", 1, 3.25 }, // Student型初期化子
        { "Bob", 259998, "DE", 2, 2.55 },   // Student型初期化子
        { "Carol", 259997, "IT", 2, 2.85 }  // Student型初期化子
    };
    for (int i = 0; i < students.size(); i++) {
        print_student(students[i]);
    }
    // 参考： Bob が卒業したので students の第1要素を削除する
    students.erase(students.begin() + 1);
    cout << "\nGoodbye, Bob.\n\n";
    // 再度 students の各要素を印字する．
    for (int i = 0; i < students.size(); i++) {
        print_student(students[i]);
    }
    return 0;
}
