#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
bool is_prime(int n);

// 関数定義
bool is_prime(int n) {
    if (n < 2) { return false; }
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}

int main() {
    cout << unitbuf << boolalpha;
    cout << is_prime(1) << "\n" << is_prime(2) << "\n";
    cout << is_prime(13) << "\n" << is_prime(14) << "\n";
    return 0;
}
