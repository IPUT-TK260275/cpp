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
Student new_student(string name, int id, string deptartment, int grade, double gpa);
// 関数定義
void print_student(Student s) {
    cout << "Name: " << s.name << ", ";
    cout << "ID: " << s.id << ", ";
    cout << "Dept: " << s.department << ", ";
    cout << "Grade: " << s.grade << ", ";
    cout << "GPA: " << s.gpa << "\n";
}
Student new_student(string name, int id, string department, int grade, double gpa) {
    Student s = {name, id, department, grade, gpa};
    return s;
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    Student alice = { "Alice", 259999, "IT", 1, 3.25 };
    Student bob = { "Bob", 259998, "DE", 2, 2.55 };
    Student carol = new_student("Carol", 259997, "IT", 2, 2.85);
    print_student(alice);
    print_student(bob);
    print_student(carol);
    return 0;
}
