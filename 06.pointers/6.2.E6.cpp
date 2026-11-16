#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int sum(int* ns, int length);

int sum(int* ns, int length) {
    int total = 0;
    for (int i = 0; i < length; i++) { total += ns[i]; }
    return total;
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    int as[3] = {3, 5, 2};
    cout << "sum(as, 3): " << sum(as, 3) << "\n";
    int bs[5] = {3, 5, 2, 4, 1};
    cout << "sum(bs, 5): " << sum(bs, 5) << "\n";
    return 0;
}
