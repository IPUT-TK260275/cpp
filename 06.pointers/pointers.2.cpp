#include <iostream>
#include <string>
using namespace std;
void update(int* p, int v);
void update(int* p, int v) {
    *p = v;
}
int main() {
    int x = 123;
    int* p = &x;
    cout << "value of x: " << x << "\n";
    cout << "address of x: " << &x << "\n";
    cout << "value of p: " << p << "\n";
    cout << "*p: " << *p << "\n";
    update(p, 456);
    cout << "--- Updated ---\n";
    cout << "value of x: " << x << "\n";
    cout << "address of x: " << &x << "\n";
    cout << "value of p: " << p << "\n";
    cout << "*p: " << *p << "\n";
}
