#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//// 円の面積を計算する関数の例 (関数を使わない質の悪いコード)
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    double radius, area;
    radius = 2.0;
    area = radius * radius * 3.141592653589793;
    cout << "The area of a circle with radius " << radius;
    cout << " is " << area << ".\n";
    radius = 3.0;
    area = radius * radius * 3.141592653589793;
    cout << "The area of a circle with radius " << radius;
    cout << " is " << area << ".\n";
    radius = 4.0;
    area = radius * radius * 3.141592653589793;
    cout << "The area of a circle with radius " << radius;
    cout << " is " << area << ".\n";
    return 0;
}
