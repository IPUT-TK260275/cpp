#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/*
 * # length 関数の例
 *
 * 文字列が入力される．
 * 入力された文字列が8文字以上であれば true を，
 * そうでなければ false を印字する．
 */
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    cout << string("Enter a new password of length > 7): ");
    string password;
    getline(cin, password);
    // 文字列 password の長さ
    int length = password.length();
    cout << (length > 7);
    cout << string("\n");
}
