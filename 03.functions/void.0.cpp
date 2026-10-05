#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>   // 乱数の生成に必要
using namespace std;
int roll_die(); // サイコロを振る (1から6の値をランダムで得る)
void print_hello(string name);
int roll_die() {
    // パラメータが0個の例．
    // (計算内容の詳細は今は理解できなくて構いません)
    random_device rd;
    uniform_int_distribution<int> dist(1, 6);
    return dist(rd);
}
void print_hello(string name) {
    // return 文がなく返り値がない例．
    cout << "Hello, " << name << "!\n";
}
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    print_hello("Alice");   // 返り値はない．
    print_hello("Bob");     // 返り値はない．
    for (int i = 0; i < 10; i++) {
        cout << i << ": " << roll_die() << "\n";
        // roll_die() の呼び出しに引数はない．
        // (ランダムに値を生成する関数なので何の引数も必要ない)
    }
    return 0;
}
