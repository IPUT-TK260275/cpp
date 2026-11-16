#include <iostream>
#include <string>
using namespace std;
int main() {
    int ns[3] = {100, 1000, 10000};
    cout << "&(ns[0]): " << &(ns[0]) << "\n";
    cout << "ns: " << ns << "\n";
    cout << "ns + 1: " << ns + 1 << "\n";
    cout << "ns + 2: " << ns + 2 << "\n";
    cout << "*ns: " << *ns << "\n";
    cout << "*(ns + 1): " << *(ns + 1) << "\n";
    cout << "*(ns + 2): " << *(ns + 2) << "\n";
    cout << "ns[0]: " << ns[0] << "\n";
    cout << "ns[1]: " << ns[1] << "\n";
    cout << "ns[2]: " << ns[2] << "\n";
}
