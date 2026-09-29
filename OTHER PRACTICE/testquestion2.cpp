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
        cout<<"rs. "<<rs<<" and "<<ps<<"paise"<<endl;
    }
};
int main(){
    Currency c = 145.59;
    c.show();
return 0;
}