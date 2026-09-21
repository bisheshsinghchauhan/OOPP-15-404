#include <iostream>
using namespace std;
class student{
    int roll;
    string name;
    int marks;
    public :
    student(){
        cin>>roll;
        cin>>marks;
        cin>>name;
    }
    ~student(){

    }
    void show(){
        cout<<roll<<" "<<marks<<" "<<name<<endl;
    }
};
int main(){
    student s1;
    student s2;
    s1.show();
    s2.show();
    return 0;
}