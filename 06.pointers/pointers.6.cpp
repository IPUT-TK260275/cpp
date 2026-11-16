#include <iostream>
#include <string>
using namespace std;
// 教材の再現。&a + 2 の計算や、a の範囲外の参照は未定義動作です。
// 隣接した別変数をポインタ演算で参照することはできません。
int main() {
    int a = 1;
    int b = 10;
    int ns[3] = {100, 1000, 10000};
    cout << "&a: " << &a << "\n";
    cout << "&b: " << &b << "\n";
    cout << "&ns[0]: " << &ns[0] << "\n";
    cout << "&a: " << &a << "\n";
    cout << "&a + 1: " << &a + 1 << "\n";
    cout << "&a + 2: " << &a + 2 << "\n";
    cout << "*(&a): " << *(&a) << "\n";
    cout << "*(&a + 1): " << *(&a + 1) << "\n";
    cout << "*(&a + 2): " << *(&a + 2) << "\n";
    cout << "(&a)[0]: " << (&a)[0] << "\n";
    cout << "(&a)[1]: " << (&a)[1] << "\n";
    cout << "(&a)[2]: " << (&a)[2] << "\n";
}
