#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string x, y;
    getline(cin, x);
    string line;
    getline(cin, line);
    int a = stoi(line);
    getline(cin, line);
    int m = stoi(line);
    getline(cin, y);
    getline(cin, line);
    int b = stoi(line);
    getline(cin, line);
    int n = stoi(line);
    long long p = 1LL * a * m;
    long long q = 1LL * b * n;
    cout << "---\n";
    cout << x << ": " << p << " yen\n";
    cout << y << ": " << q << " yen\n";
    cout << "===\nTotal: " << p + q << " yen\n";
    return 0;
}
