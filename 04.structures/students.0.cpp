#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
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
    cout << "Name: " << name0 << ", ";
    cout << "ID: " << id0 << ", ";
    cout << "Dept: " << department0 << ", ";
    cout << "Grade: " << grade0 << ", ";
    cout << "GPA: " << gpa0 << "\n";
    cout << "Name: " << name1 << ", ";
    cout << "ID: " << id1 << ", ";
    cout << "Dept: " << department1 << ", ";
    cout << "Grade: " << grade1 << ", ";
    cout << "GPA: " << gpa1 << "\n";
    cout << "Name: " << name2 << ", ";
    cout << "ID: " << id2 << ", ";
    cout << "Dept: " << department2 << ", ";
    cout << "Grade: " << grade2 << ", ";
    cout << "GPA: " << gpa2 << "\n";
    return 0;
}
