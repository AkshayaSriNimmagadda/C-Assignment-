#include <iostream>
using namespace std;

class Food {
public:
    virtual void cost() = 0;
};

class Pizza : public Food {
public:
    void cost() {
        cout << "Pizza Cost = Rs. 250" << endl;
    }
};

class Burger : public Food {
public:
    void cost() {
        cout << "Burger Cost = Rs. 120" << endl;
    }
};

int main() {
    Food *f;
    Pizza p;
    Burger b;

    f = &p;
    f->cost();

    f = &b;
    f->cost();
}
