#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
bool is_even(int n);

// 関数定義
bool is_even(int n) {
    return n % 2 == 0;
}

int main() {
    cout << unitbuf << boolalpha;
    cout << is_even(2) << "\n" << is_even(3) << "\n";
    return 0;
}
