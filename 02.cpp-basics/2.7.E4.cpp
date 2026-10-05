#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string line;
    getline(cin, line);
    int a = stoi(line);
    getline(cin, line);
    int b = stoi(line);
    getline(cin, line);
    int c = stoi(line);
    cout << "---\n" << (a != b && a != c && b != c) << "\n";
    return 0;
}
