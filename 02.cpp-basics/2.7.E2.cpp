#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string line;
    getline(cin, line);
    double a = stod(line);
    getline(cin, line);
    double b = stod(line);
    getline(cin, line);
    double c = stod(line);
    getline(cin, line);
    double d = stod(line);
    getline(cin, line);
    double e = stod(line);
    cout << "---\n" << (a + b + c + d + e) / 5.0 << "\n";
    return 0;
}
