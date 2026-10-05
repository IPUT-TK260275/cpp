#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
int index_of(vector<int> ns, int k);

// 関数定義
int index_of(vector<int> ns, int k) {
    for (int i = 0; i < ns.size(); i++) {
        if (ns[i] == k) { return i; }
    }
    return -1;
}

int main() {
    cout << unitbuf << boolalpha;
    cout << index_of(vector<int> {1, 10, 100, 1000, 100, 10000}, 100) << "\n";
    cout << index_of(vector<int> {1, 10, 100, 1000}, 2) << "\n";
    return 0;
}
