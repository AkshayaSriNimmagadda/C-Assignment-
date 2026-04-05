#include <iostream>
using namespace std;
class Customer {
public:
    int units;
    void get() 
    {
        cout << "Enter electricity units consumed: ";
        cin >> units;
    }
};

class Bill : public Customer {
public:
    void calculate() 
    {
        float amount = units * 5.5;
        cout << "Total Bill Amount: " << amount << endl;
    }
};

int main() {
    Bill b;
    b.get();
    b.calculate();
}
