#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//// 2次元ベクトルの和と実数倍を計算する関数の例 (関数を使わない質の悪いコード)
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<double> a = { 2.0, 3.0 };
    vector<double> b = { -4.0, 5.0 };
    string s_a = "(" + to_string(a[0]) + ", " + to_string(a[1]) + ")";
    string s_b = "(" + to_string(b[0]) + ", " + to_string(b[1]) + ")";
    cout << "a: " << s_a << "\n";
    cout << "b: " << s_b << "\n";
    vector<double> c = { a[0] + b[0], a[1] + b[1] };
    string s_c = "(" + to_string(c[0]) + ", " + to_string(c[1]) + ")";
    cout << "c = add(a, b): " << s_c << "\n";
    vector<double> d = { 6.0 * a[0], 6.0 * a[1] };
    string s_d = "(" + to_string(d[0]) + ", " + to_string(d[1]) + ")";
    cout << "d = scale(6.0, a): " << s_d << "\n";
    vector<double> z = { c[0] + d[0], c[1] + d[1] };
    vector<double> e = { 7.0 * z[0], 7.0 * z[1] };
    string s_e = "(" + to_string(e[0]) + ", " + to_string(e[1]) + ")";
    cout << "scale(7.0, add(c, d)): " << s_e << "\n";
    return 0;
}
