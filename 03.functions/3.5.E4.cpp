#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
void print_stars(int n);

// 関数定義
void print_stars(int n) {
    for (int i = 0; i < n; i++) { cout << "*"; }
}

int main() {
    cout << unitbuf << boolalpha;
    print_stars(3);
    cout << "\n";
    print_stars(7);
    cout << "\n";
    return 0;
}
