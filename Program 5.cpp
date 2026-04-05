#include <iostream>
using namespace std;

class Book {
public:
    int days;
    void getDays() {
        cout << "Enter days book kept: ";
        cin >> days;
    }
};

class Student : public Book {
};

class Fine {
public:
    int rate = 2;
};

class Library : public Student, public Fine {
public:
    void calculateFine() {
        cout << "Fine Amount: " << days * rate << endl;
    }
};

int main() {
    Library l;
    l.getDays();
    l.calculateFine();
}
