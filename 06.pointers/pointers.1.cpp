#include <iostream>
#include <string>
using namespace std;
int main() {
    int x = 123;
    int* p = &x;
    cout << "value of x: " << x << "\n";
    cout << "address of x: " << &x << "\n";
    cout << "value of p: " << p << "\n";
    cout << "*p: " << *p << "\n";
    *p = 456;
    cout << "--- Updated ---\n";
    cout << "value of x: " << x << "\n";
    cout << "address of x: " << &x << "\n";
    cout << "value of p: " << p << "\n";
    cout << "*p: " << *p << "\n";
}
