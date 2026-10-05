#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// ベクターリテラルと要素参照式の例
// 1以上30以下の整数 d を入力する．2025年6月d日の曜日を印字する．
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    cout << string("Input d: ");
    string line;
    getline(cin, line);
    int d = stoi(line);
    vector<string> days = vector<string> {
        string("Saturday"),  // 第0要素．d % 7 が 0 と等しいときに印字する．
        string("Sunday"),    // 第1要素．d % 7 が 1 と等しいときに印字する．
        string("Monday"),    // 第2要素．d % 7 が 2 と等しいときに印字する．
        string("Tuesday"),   // 第3要素．d % 7 が 3 と等しいときに印字する．
        string("Wednesday"), // 第4要素．d % 7 が 4 と等しいときに印字する．
        string("Thursday"),  // 第5要素．d % 7 が 5 と等しいときに印字する．
        string("Friday")     // 第6要素．d % 7 が 6 と等しいときに印字する．
    };
    cout << string("June ");
    cout << d;
    cout << string(", 2025 is a ");
    cout << days[d % 7];
    cout << string(".\n");
}
