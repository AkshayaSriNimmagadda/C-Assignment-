#include <iostream>
using namespace std;
class Shape {
public:
    virtual void perimeter() = 0;
};
class Square : public Shape {
public:
    int side;
    void perimeter() {
        cout << "Enter side: ";
        cin >> side;
        cout << "Perimeter of Square = " << 4 * side << endl;
    }
};
class Triangle : public Shape {
public:
    int a,b,c;
    void perimeter() {
        cout << "Enter three sides: ";
        cin >> a >> b >> c;
        cout << "Perimeter of Triangle = " << a + b + c << endl;
    }
};
int main() {
    Shape *s;
    Square sq;
    Triangle t;
    s = &sq;
    s->perimeter();

    s = &t;
    s->perimeter();
}
