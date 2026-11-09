#include <iostream>
#include <string>
using namespace std;
#define N 5

int main() {
    cout << unitbuf << boolalpha;
    double as[N];
    double bs[N];
    double cs[N];
    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        as[i] = stod(line);
    }
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        bs[i] = stod(line);
    }
    for (int i = 0; i < N; i++) {
        cs[i] = as[i] + bs[i];
    }
    cout << "---\n";
    for (int i = 0; i < N; i++) {
        cout << cs[i] << "\n";
    }
    return 0;
}
