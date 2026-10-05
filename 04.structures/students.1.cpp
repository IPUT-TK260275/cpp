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
    string name0 = "Alice";
    int id0 = 259999;
    string department0 = "IT";
    int grade0 = 1;
    double gpa0 = 3.25;
    string name1 = "Bob";
    int id1 = 259998;
    string department1 = "DE";
    int grade1 = 2;
    double gpa1 = 2.55;
    string name2 = "Carol";
    int id2 = 259997;
    string department2 = "IT";
    int grade2 = 2;
    double gpa2 = 2.85;
    
    print_student(name0, id0, department0, grade0, gpa0);
    print_student(name1, id1, department1, grade1, gpa1);
    print_student(name2, id2, department2, grade2, gpa2);
    return 0;
}
