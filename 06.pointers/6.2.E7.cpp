#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define N 3
struct Apple {
    string brand;
    double weight;
    int price;
};

void add_tax(Apple* as, int length);

void add_tax(Apple* as, int length) {
    for (int i = 0; i < length; i++) {
        as[i].price = static_cast<int>(static_cast<long long>(as[i].price) * 110 / 100);
    }
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    Apple apples[N] = {
        {"Fuji", 360.5, 240},
        {"Tsugaru", 380.5, 250},
        {"Shinano", 355.5, 245}
    };
    for (int i = 0; i < N; i++) {
        Apple apple = apples[i];
        cout << apple.brand << ": " << apple.weight << " g, "
             << apple.price << " yen\n";
    }
    add_tax(apples, N);
    cout << "\n";
    for (int i = 0; i < N; i++) {
        Apple apple = apples[i];
        cout << apple.brand << ": " << apple.weight << " g, "
             << apple.price << " yen\n";
    }
    return 0;
}
