#include <iostream>
#include <string>
using namespace std;
// 教材の再現。単独変数の &a + 2、&a + 3、&b + 2 は未定義動作です。
int main() {
    int a = 2;
    double b = 3.0;
    int ns[4] = {5, 7, 11, 13};
    cout << "&a: " << &a << "\n";
    cout << "&a + 1: " << &a + 1 << "\n";
    cout << "&a + 2: " << &a + 2 << "\n";
    cout << "&a + 3: " << &a + 3 << "\n";
    cout << "&b: " << &b << "\n";
    cout << "&b + 1: " << &b + 1 << "\n";
    cout << "&b + 2: " << &b + 2 << "\n";
    cout << "&ns[0]: " << &ns[0] << "\n";
    cout << "&ns[1]: " << &ns[1] << "\n";
}
