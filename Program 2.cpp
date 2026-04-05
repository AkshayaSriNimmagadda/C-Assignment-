#include <iostream>
using namespace std;

class Theory {
public:
    int t;
    void getTheory() {
        cout << "Enter theory marks: ";
        cin >> t;
    }
};

class Practical {
public:
    int p;
    void getPractical() {
        cout << "Enter practical marks: ";
        cin >> p;
    }
};

class Result : public Theory, public Practical {
public:
    void total() {
        cout << "Total Marks: " << t + p << endl;
    }
};

int main() {
    Result r;
    r.getTheory();
    r.getPractical();
    r.total();
}
