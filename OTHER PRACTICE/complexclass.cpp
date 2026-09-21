#include <iostream>
using namespace std;
class Comp{
    int real , imag;
    public:
    Comp(int r = 0, int i = 0):
    real{r} , imag{i} {}
    void show() const {
        cout<<real<<"+"<<"i"<<imag<<endl;
    } 
     //addition operator defined over here so + operator can perform his action.
     Comp operator+(const Comp& p) const {
        // return Comp(this->real + p.real, this->imag + p.imag); //each one of these questions are right.
        return Comp(real + p.real, imag + p.imag);
        // int r = this->real + p.real; //this one is also correct.
        // int i = this->imag+ p.imag;
        // Comp t(r,i);
        // return t;
    }
};
int main(){
    Comp c1(5,20);
    Comp c2(15,9);
    c1.show();
    c2.show();
    Comp c3 = c1 + c2; //operator required to be define here.
    c3.show();
    return 0;
}