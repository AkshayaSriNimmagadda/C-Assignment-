#include <iostream>
using namespace std;

class Product {
public:
    float price;
    void getPrice() {
        cout << "Enter product price: ";
        cin >> price;
    }
};

class Discount : public Product {
public:
    float dis;
    void getDiscount() {
        cout << "Enter discount %: ";
        cin >> dis;
    }
};

class FinalPrice : public Discount {
public:
    void calculate() {
        float finalPrice = price - (price * dis / 100);
        cout << "Final Price: " << finalPrice << endl;
    }
};

int main() {
    FinalPrice f;
    f.getPrice();
    f.getDiscount();
    f.calculate();
}
