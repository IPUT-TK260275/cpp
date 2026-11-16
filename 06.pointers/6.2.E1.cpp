#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void square(int* p);

void square(int* p) {
    *p = *p * *p;
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    int a = 2;
    int b = 3;
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    square(&a);
    square(&b);
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    return 0;
}
