#include <iostream>
using namespace std;
class Comp {
    int real, imag;
public:
    Comp(int r = 0, int i = 0) : real(r), imag(i) {}
    void show() const {
        cout << real << " + " << imag << "i" << endl;
    }
    friend Comp operator++(Comp& c, int);
};
Comp operator++(Comp& c, int) {
    Comp temp = c;  
    c.real++;       
    return temp;    
}
int main() {
    Comp c1(5, 20);
    Comp c2(15, 9);
    c1.show();
    c2.show();
    Comp c3 = c1++;
    c3.show();
    c1.show();
    return 0;
}