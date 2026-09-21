#include <iostream>
using namespace std;

// Call by Value
void value(int x) {
    x = 20;
}

// Call by Reference
void reference(int &x) {
    x = 30;
}

// Call by Address
void address(int *x) {
    *x = 40;
}

int main() {
    int a = 10, b = 10, c = 10;

    value(a);
    reference(b);
    address(&c);

    cout << "Call by Value: " << a << endl;
    cout << "Call by Reference: " << b << endl;
    cout << "Call by Address: " << c << endl;

    return 0;
}