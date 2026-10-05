#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 関数宣言
double mean(vector<double> ns);

// 関数定義
double mean(vector<double> ns) {
    double sum = 0;
    for (int i = 0; i < ns.size(); i++) { sum += ns[i]; }
    return sum / ns.size();
}

int main() {
    cout << unitbuf << boolalpha;
    cout << mean(vector<double> {2, 3, 5, 7, 8}) << "\n";
    cout << mean(vector<double> {2.4, 3.2}) << "\n";
    return 0;
}
