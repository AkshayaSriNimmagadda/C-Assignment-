#include <iostream>
using namespace std;

class Transport {
public:
    virtual void fare() {
        cout << "Transport fare" << endl;
    }
};

class Bus : public Transport {
public:
    void fare() {
        cout << "Bus Fare = Rs. 30" << endl;
    }
};

class Train : public Transport {
public:
    void fare() {
        cout << "Train Fare = Rs. 20" << endl;
    }
};

int main() {
    Transport *t;
    Bus b;
    Train tr;

    t = &b;
    t->fare();

    t = &tr;
    t->fare();
}
