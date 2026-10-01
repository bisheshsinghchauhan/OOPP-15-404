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
    B(int x , int y): A(x + y)
    {
        cout<<"B constructor : "<< x+y<<endl;
    }
};

int main(){
    // B objjj; error cause no argument is passed in this (int x)
    B obj(10, 20);
return 0;
}