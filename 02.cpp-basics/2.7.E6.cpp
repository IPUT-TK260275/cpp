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
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }
    cout << "---\n" << a << " " << b << " " << c << "\n";
    return 0;
}
