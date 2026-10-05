#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
int count(vector<int> ns, int k);

// 関数定義
int count(vector<int> ns, int k) {
    int total = 0;
    for (int i = 0; i < ns.size(); i++) {
        if (ns[i] == k) { total++; }
    }
    return total;
}

int main() {
    cout << unitbuf << boolalpha;
    cout << count(vector<int> {1, 10, 100, 1000, 10, 10000, 10}, 10) << "\n";
    cout << count(vector<int> {1, 10, 100, 1000}, 2) << "\n";
    return 0;
}
