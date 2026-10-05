#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << unitbuf << boolalpha;
    string line;
    getline(cin, line);
    int a = stoi(line);
    cout << "---\n";
    for (long long k = 1; k <= a; k += 2) {
        cout << k << "\n";
    }
    return 0;
}
