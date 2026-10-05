#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
double max(double a, double b);

// 関数定義
double max(double a, double b) {
    if (a >= b) { return a; }
    return b;
}

int main() {
    cout << unitbuf << boolalpha;
    cout << max(2.5, 3.1) << " " << (max(2.5, 3.1) == 3.1) << "\n";
    cout << max(4.5, 3.1) << " " << (max(4.5, 3.1) == 4.5) << "\n";
    return 0;
}
