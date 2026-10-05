#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
vector<int> indices(vector<int> ns, int k);

// 関数定義
vector<int> indices(vector<int> ns, int k) {
    vector<int> result;
    for (int i = 0; i < ns.size(); i++) {
        if (ns[i] == k) { result.push_back(i); }
    }
    return result;
}

int main() {
    cout << unitbuf << boolalpha;
    vector<int> result = indices(vector<int> {1, 10, 100, 1000, 100, 10000}, 100);
    for (int i = 0; i < result.size(); i++) {
        if (i > 0) { cout << " "; }
        cout << result[i];
    }
    cout << "\n";
    cout << indices(vector<int> {1, 10, 100, 1000}, 2).size() << "\n";
    return 0;
}
