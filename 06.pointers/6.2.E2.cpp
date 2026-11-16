#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void exchange(int* p, int* q);

void exchange(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    int a = 2;
    int b = 3;
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    exchange(&a, &b);
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    return 0;
}
