#include <iostream>
using namespace std;
class Comp{
    int real , imag;
    public:
    Comp(int r = 0, int i = 0) : real(r), imag(i) {}
    void show() const {
        cout << real << " + " << imag << "i" << endl;
    }
    friend Comp operator+(int x , const Comp& d);
};

Comp operator+(int x , const Comp& d){
        return Comp(x + d.real, x + d.imag);
}

int main(){
    Comp c1(5,20);
    Comp c2(15,9);
    c1.show();
    c2.show();
    Comp c3 = 5+c1; //operator required to be define here.
    c3.show();
    return 0;
}