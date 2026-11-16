#include <iostream>
#include <string>
using namespace std;
struct Product {
    string name;
    int price;
    double tax_rate;
};
void update_tax_rate(Product* p_prod, double rate) {
    (*p_prod).tax_rate = rate;
}
int main() {
    Product apple = {"apple", 240, 1.08};
    cout << apple.tax_rate << "\n";
    update_tax_rate(&apple, 1.10);
    cout << apple.tax_rate << "\n";
}
