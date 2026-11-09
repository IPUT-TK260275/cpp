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
    bool sorted = true;
    for (int i = 1; i < N; i++) {
        if (ns[i - 1] > ns[i]) {
            sorted = false;
            break;
        }
    }
    cout << sorted << "\n";
    return 0;
}
