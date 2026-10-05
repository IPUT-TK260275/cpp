#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// 関数宣言
void print_student(string name, int id, string department, int grade, double gpa);
// 関数定義
void print_student(string name, int id, string department, int grade, double gpa) {
    cout << "Name: " << name << ", ";
    cout << "ID: " << id << ", ";
    cout << "Dept: " << department << ", ";
    cout << "Grade: " << grade << ", ";
    cout << "GPA: " << gpa << "\n";
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<string> names = { "Alice", "Bob", "Carol" };
    vector<int> ids = { 259999, 259998, 259997 };
    vector<string> departments = { "IT", "DE", "IT" };
    vector<int> grades = { 1, 2, 2 };
    vector<double> gpas = { 3.25, 2.55, 2.85 };
    for (int i = 0; i < names.size(); i++) {
        print_student(names[i], ids[i], departments[i], grades[i], gpas[i]);
    }
    return 0;
}
