#include <iostream>
using namespace std;
void value(int x) {
    x = x + 10;
}
void reference(int &x) {
    x = x + 10;
}
void address(int *x) {
    *x = *x + 10;
}
int main() {
    int a = 10, b = 10, c = 10;
    value(a);
    reference(b);
    address(&c);
    cout << "Call by Value: " << a << endl;
    cout << "Call by Reference: " << b << endl;
    cout << "Call by Address: " << c;

    return 0;
}