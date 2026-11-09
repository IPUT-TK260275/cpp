#include <iostream>
#include <string>
using namespace std;
#define N 5

int main() {
    cout << unitbuf << boolalpha;
    int ns[N];
    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        ns[i] = stoi(line);
    }
    cout << "---\n";
    for (int i = 0; i < N; i++) {
        cout << ns[i] * ns[i] << "\n";
    }
    return 0;
}
