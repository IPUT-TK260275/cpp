#include <iostream>
#include <string>
using namespace std;
struct Product {
    string name;
    int price;
    double tax_rate;
};
Product new_tax_rate(Product prod, double rate) {
    Product new_product = {prod.name, prod.price, rate};
    return new_product;
}
int main() {
    Product apple = {"apple", 240, 1.08};
    cout << apple.tax_rate << "\n";
    apple = new_tax_rate(apple, 1.10);
    cout << apple.tax_rate << "\n";
}
