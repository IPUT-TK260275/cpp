#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// ベクターに要素を追加する例
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<int> a = vector<int> {1, 10, 100, 1000};
    int length = a.size();
    cout << string("a: ");
    int i = 0;
    while (i < length) {
        if (i > 0) {
            cout << string(", ");
        }
        cout << a[i];
        i = i + 1;
    }
    cout << string("\n");
    // ベクター a の末尾に 10000 を追加する．
    a.push_back(10000);
    cout << string("10000 pushed.\n");
    // この時点でベクター a は vector<int> {1, 10, 100, 1000, 10000} となる．
    length = a.size();
    cout << string("a: ");
    i = 0;
    while (i < length) {
        if (i > 0) {
            cout << string(", ");
        }
        cout << a[i];
        i = i + 1;
    }
    cout << string("\n");
}
