#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//// 円の面積を計算する関数の例
// 関数宣言
double area_circle(double radius);
// 関数定義
// 円の面積を計算する関数
double area_circle(double radius) {
    return radius * radius * 3.141592653589793;
}
// 情報の表示を行う関数
void print_circle_info(double radius) {
    cout << "The area of a circle with radius " << radius;
    cout << " is " << area_circle(radius) << ".\n";
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    print_circle_info(2.0);
    print_circle_info(3.0);
    print_circle_info(4.0);
    return 0;
}
