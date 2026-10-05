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
    for (long long k = 1; k <= a; k++) {
        for (long long i = 0; i < k; i++) {
            if (i > 0) { cout << ","; }
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}
