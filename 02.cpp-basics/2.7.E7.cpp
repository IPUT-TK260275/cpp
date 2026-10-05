#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string a;
    getline(cin, a);
    cout << "---\n" << a.substr(a.length() / 2, 1) << "\n";
    return 0;
}
