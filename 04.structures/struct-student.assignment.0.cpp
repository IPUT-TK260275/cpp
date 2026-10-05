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
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    // 構造体型変数の初期化
    Student alice = { "Alice", 259999, "IT", 1, 3.25 };
    Student bob = { "Bob", 259998, "DE", 2, 2.55 };
    // 構造体データ bob の各メンバ変数の値を印字する．
    cout << "Name: " << bob.name << ", ";
    cout << "ID: " << bob.id << ", ";
    cout << "Dept: " << bob.department << ", ";
    cout << "Grade: " << bob.grade << ", ";
    cout << "GPA: " << bob.gpa << "\n";
    // 構造体型変数の更新
    bob = alice;
    // 構造体型変数 bob の各メンバ変数に alice の各メンバ変数の値が格納された．
    // 再度，構造体データ bob の各メンバ変数の値を印字する．
    cout << "Name: " << bob.name << ", ";
    cout << "ID: " << bob.id << ", ";
    cout << "Dept: " << bob.department << ", ";
    cout << "Grade: " << bob.grade << ", ";
    cout << "GPA: " << bob.gpa << "\n";
    return 0;
}
