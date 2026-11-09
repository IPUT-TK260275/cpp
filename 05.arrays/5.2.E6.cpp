#include <iostream>
#include <string>
using namespace std;
#define N 5

int main() {
    cout << unitbuf << boolalpha;
    int as[N];
    int bs[N];
    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        as[i] = stoi(line);
    }
    for (int i = 0; i < N; i++) {
        bs[i] = as[N - 1 - i];
    }
    cout << "---\n";
    for (int i = 0; i < N; i++) {
        cout << bs[i] << "\n";
    }
    return 0;
}
