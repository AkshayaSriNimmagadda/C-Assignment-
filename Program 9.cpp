#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Payment done using UPI" << endl;
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Payment done using Debit Card" << endl;
    }
};

int main() {
    Payment *p;
    UPI u;
    Card c;

    p = &u;
    p->pay();

    p = &c;
    p->pay();
}
