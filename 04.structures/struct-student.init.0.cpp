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
    // 構造体データ alice の各メンバ変数の参照
    cout << "Name: " << alice.name << ", ";
    cout << "ID: " << alice.id << ", ";
    cout << "Dept: " << alice.department << ", ";
    cout << "Grade: " << alice.grade << ", ";
    cout << "GPA: " << alice.gpa << "\n";
    return 0;
}
