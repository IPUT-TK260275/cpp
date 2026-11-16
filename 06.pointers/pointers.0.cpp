#include <iostream>
#include <string>
using namespace std;
int main() {
    int a = 2;
    int ns[3] = {5, 7, 11};
    cout << "address of a: " << &a << "\n";
    cout << "address of ns[0]: " << &ns[0] << "\n";
    cout << "address of ns[1]: " << &ns[1] << "\n";
}
