#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//// 2次元ベクトルの和と実数倍を計算する関数の例
// 関数宣言
vector<double> add(vector<double> u, vector<double> v);
vector<double> scale(double r, vector<double> v);
string info(vector<double> v);
// 関数定義
vector<double> add(vector<double> u, vector<double> v) {
    vector<double> w = { u[0] + v[0], u[1] + v[1] };
    return w;
}
vector<double> scale(double r, vector<double> v) {
    vector<double> w = { r * v[0], r * v[1] };
    return w;
}
string info(vector<double> v) {
    string x = to_string(v[0]);
    string y = to_string(v[1]);
    return "(" + x + ", " + y + ")";
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<double> a = { 2.0, 3.0 };
    vector<double> b = { -4.0, 5.0 };
    cout << "a: " << info(a) << "\n";
    cout << "b: " << info(b) << "\n";
    vector<double> c = add(a, b);
    cout << "c = add(a, b): " << info(c) << "\n";
    vector<double> d = scale(6.0, a);
    cout << "d = scale(6.0, a): " << info(d) << "\n";
    vector<double> e = scale(7.0, add(c, d));
    cout << "scale(7.0, add(c, d)): " << info(e) << "\n";
    return 0;
}
