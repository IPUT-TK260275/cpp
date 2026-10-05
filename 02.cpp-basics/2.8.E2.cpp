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
    // 10進数の各桁を文字列で保持し、整数型の桁あふれを避ける。
    string factorial = "1";
    for (long long k = 1; k <= a; k++) {
        long long carry = 0;
        for (int i = factorial.length() - 1; i >= 0; i--) {
            long long digit = (factorial[i] - '0') * k + carry;
            factorial[i] = '0' + digit % 10;
            carry = digit / 10;
        }
        if (carry > 0) {
            factorial = to_string(carry) + factorial;
        }
        cout << factorial << "\n";
    }
    return 0;
}
