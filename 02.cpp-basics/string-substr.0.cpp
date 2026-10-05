#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/*
 * # substr 関数の例
 *
 * 英大文字2つの後に数字6つが並ぶ長さ8文字の文字列が入力される （例. "TK987654"）．
 * 最初の英大文字2つの後に続く6桁の数字を印字する．
 */
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    cout << "Enter your Student ID (e.g. \"TK987654\"): ";
    string id;
    getline(cin, id);
    string number_part = id.substr(2, 6);
    cout << number_part + "\n";
}
