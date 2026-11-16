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

Apple* cheaper_apple(Apple* p, Apple* q);

Apple* cheaper_apple(Apple* p, Apple* q) {
    if ((*p).price <= (*q).price) { return p; }
    return q;
}

int main() {
    cout << unitbuf << boolalpha; // 授業用の設定
    Apple apple0 = {"Fuji", 360.5, 240};
    Apple apple1 = {"Tsugaru", 380.5, 250};
    Apple apple2 = {"Shinano", 355.5, 245};
    cout << "cheaper_apple(&apple0, &apple1): ";
    cout << (*cheaper_apple(&apple0, &apple1)).brand << "\n";
    cout << "cheaper_apple(&apple1, &apple2): ";
    cout << (*cheaper_apple(&apple1, &apple2)).brand << "\n";
    return 0;
}
