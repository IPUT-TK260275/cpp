#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string a;
    getline(cin, a);
    cout << "---\n" << a.substr(0, 3) << "-" << a.substr(3, 4) << "\n";
    return 0;
}
