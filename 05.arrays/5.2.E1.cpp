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
    int k;
    getline(cin, line);
    k = stoi(line);
    cout << "---\n";
    cout << ns[k] << "\n";
    return 0;
}
