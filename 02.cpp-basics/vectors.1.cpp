#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// ベクターの例
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<int> a = vector<int> {1, 10, 100};   // 長さ3のベクター
    int length = a.size();   // ベクター a の長さ（つまり3）
    // 配列 a の各要素の印字
    cout << string("a: ");
    int i = 0;
    while (i < length) {
        if (i > 0) {
            cout << string(", ");
        }
        cout << a[i];
        i = i + 1;
    }
    cout << string(".\n");
    a[0] = 2;    // ベクター a の第 0 要素の値を 2 に更新する．
    cout << string("a[0] updated.\n");
    // 配列 a の各要素の印字
    cout << string("a: ");
    i = 0;
    while (i < length) {
        if (i > 0) {
            cout << string(", ");
        }
        cout << a[i];
        i = i + 1;
    }
    cout << string(".\n");
}
