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
    int max_index = 0;
    for (int i = 1; i < N; i++) {
        if (ns[i] > ns[max_index]) {
            max_index = i;
        }
    }
    cout << max_index << "\n";
    return 0;
}
