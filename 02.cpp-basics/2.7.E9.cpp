#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string a;
    getline(cin, a);
    string::size_type at = a.find("@");
    bool valid = false;
    if (at != string::npos && at != 0) {
        valid = a.find("@", at + 1) == string::npos
             && a.find(".", at + 1) != string::npos;
    }
    cout << "---\n" << valid << "\n";
    return 0;
}
