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
    cout << "---\n" << (a + b / 3 < 7) << "\n";
    return 0;
}
