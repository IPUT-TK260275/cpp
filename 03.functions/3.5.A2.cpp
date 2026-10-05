#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// 関数宣言
vector<double> scale(vector<double> ns, double k);
// 関数定義
vector<double> scale(vector<double> ns, double k) {
    for (int i = 0; i < ns.size(); i++) {
        ns[i] = ns[i] * k;
    }
    return ns;
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    // 関数が正しく動作するかを確認するための計算を自分なりに考えて書きましょう．
    // 以下はその例です．
    vector<double> v0 = {0, 1, 2, 3.5};
    vector<double> v0_scaled = scale(v0, 1.5);
    vector<double> v0_scaled_expected = {0, 1.5, 3, 5.25};     // scale(v0, 1.5) の結果として期待される正解データ
    for (int i = 0; i < v0_scaled.size(); i++) {
        cout << v0_scaled[i] << " ";                             // v0_scaled[i] の値を表示して確認する
        cout << (v0_scaled[i] == v0_scaled_expected[i]) << "\n"; // true が表示されることが期待される
    }
    return 0;
}
