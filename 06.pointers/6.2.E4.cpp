#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
struct Apple {
    string brand;
    double weight;
    int price;
};

void discount(Apple* p);

void discount(Apple* p) {
    (*p).price = (*p).price / 2;
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    Apple apple = {"Fuji", 360.5, 240};
    cout << "apple.price: " << apple.price << "\n";
    discount(&apple);
    cout << "apple.price: " << apple.price << "\n";
    return 0;
}
