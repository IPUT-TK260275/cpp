#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void exchange(int* p, int* q);
void sort3(int* p, int* q, int* r);

void exchange(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
void sort3(int* p, int* q, int* r) {
    if (*p > *q) { exchange(p, q); }
    if (*q > *r) { exchange(q, r); }
    if (*p > *q) { exchange(p, q); }
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    int a = 3;
    int b = 5;
    int c = 2;
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n";
    sort3(&a, &b, &c);
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n";
    return 0;
}
