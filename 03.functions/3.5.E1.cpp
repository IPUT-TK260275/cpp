#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// 関数宣言
int cost(int price, int number);
// 関数定義
int cost(int price, int number) {
    return price * number;
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    // 関数が正しく動作するかを確認するための計算を自分なりに考えて書きましょう．
    // 以下はその例です．
    int result0 = cost(160, 4);
    cout << result0 << " ";            // 640 なら正しい
    cout << (result0 == 640) << "\n";  // true が印字されることが期待される
    int result1 = cost(180, 6);
    cout << result1 << " ";            // 1080 なら正しい
    cout << (result1 == 1080) << "\n"; // true が印字されることが期待される
    return 0;
}
