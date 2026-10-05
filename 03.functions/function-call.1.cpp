#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int f(int x);
int g(int y);
int f(int x) {
    // コールスタックに呼び出し元の位置情報が積まれる．
    // パラメータ x には与えられた引数が代入される．
    cout << "f(" << x << ") called.\n";
    int c = x + 2;
    int d = g(c); // ここで Step Into する．x が 2 のとき返り値は 8．
    return d + 1;
    // 呼び出し元に戻る．
    // その際にコールスタックから呼び出し元の位置情報を取り除く．
}
int g(int y) {
    // コールスタックに呼び出し元の位置情報が積まれる．
    // パラメータ x には与えられた引数が代入される．
    cout << "g(" << y << ") called.\n";
    return y * 2;
    // 呼び出し元に戻る．
    // その際にコールスタックから呼び出し元の位置情報を取り除く．
}
int main() { 
    cout << unitbuf << boolalpha;   // 授業用の設定    
    int a = f(2); // ここで Step Into する．返り値は 9．
    int b = g(5); // ここで Step Into する．返り値は 10．
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    return 0;
}
