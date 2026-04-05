#include <iostream>
using namespace std;

class Number {
public:
    float value;
    void getValue() {
        cout << "Enter value: ";
        cin >> value;
    }
};

class KmToM : public Number {
public:
    void convert() {
        cout << "Meters: " << value * 1000 << endl;
    }
};

class KgToG : public Number {
public:
    void convert() {
        cout << "Grams: " << value * 1000 << endl;
    }
};

int main() {
    KmToM a;
    KgToG b;

    a.getValue();
    a.convert();

    b.getValue();
    b.convert();
}
