#include<iostream>

using namespace std;
class A{
    public:
    A(int x){
        cout<<"A constructor : "<<x<<endl;
    }
};
class B: public A{
    public:
    B(int x): A(x)
    {
        cout<<"B constructor : "<<endl;
    }
};

int main(){
    // B objjj; error cause no argument is passed in this (int x)
    B obj(20);
return 0;
}