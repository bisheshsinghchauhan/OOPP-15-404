#include<iostream>
using namespace std;
class Currency{
    int rs,ps;
    public:
    Currency(float amt){
        rs = amt;
        ps = (amt-rs)*100;
    }
    void show(){
        cout<<"rs. "<<rs<<" and "<<ps<<" paise"<<endl;
    }
    operator float(){
        return (rs*100 +ps)/100.0;
    }
};
int main(){
    Currency c = 145.59;
    c.show();
    float amt = c;
    cout<<"amount = "<<amt;
return 0;
}