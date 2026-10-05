#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string line;
    getline(cin, line);
    int a = stoi(line);
    cout << "---\n" << a / 60 << "\n" << a % 60 << "\n";
    return 0;
}
