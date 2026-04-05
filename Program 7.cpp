#include <iostream>
using namespace std;

class Notification {
public:
    virtual void send() {
        cout << "Sending notification" << endl;
    }
};

class Email : public Notification {
public:
    void send() {
        cout << "Email notification sent" << endl;
    }
};

class SMS : public Notification {
public:
    void send() {
        cout << "SMS notification sent" << endl;
    }
};

int main() {
    Notification *n;
    Email e;
    SMS s;

    n = &e;
    n->send();

    n = &s;
    n->send();
}
