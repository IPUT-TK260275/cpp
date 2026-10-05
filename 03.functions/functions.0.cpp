#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// まず関数宣言文を並べる
double average(double x, double y);
string multi(string text, int repeat);
// その後に関数定義文を並べる
double average(double x, double y) {
    double sum = x + y;
    double avr = sum / 2.0;
    return avr; // 返り値を変数 avr の値に設定して関数の実行を終える．
}
string multi(string text, int repeat) {
    string s = string("");
    for (int i = 0; i < repeat; i++) {
        s = s + text;   // s の末尾に text を連結する．
    }
    return s;
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    //// 関数 average の適用
    double a = 2;
    double b = 3;
    cout << string("The average of ") << a << string(" and ") << b;
    cout << string(" is ") << average(a, b) << ".\n";
    //// 関数 multi の適用
    string c = string("Zawa ");
    cout << multi(c, 2) << "...\n";
    cout << multi(c, 3) << "...\n";
    return 0;
}
