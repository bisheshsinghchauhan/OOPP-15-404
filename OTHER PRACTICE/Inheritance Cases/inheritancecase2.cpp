#include<iostream>

using namespace std;
class A{
    public:
    A(){
        cout<<"A constructor"<<endl;
    }
};
class B: public A{
    public:
    B(int x){
        cout<<"B constructor : "<<x<<endl;
    }
};

int main(){
    // B objjj; error cause no argument is passed in this (int x)
    B obb(10);
return 0;
}