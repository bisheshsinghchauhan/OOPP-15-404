#include<iostream>
using namespace std;
class Emp{
    public:
    Emp(){
        cout<<"employee constructor"<<endl;
    }
    ~Emp(){
        cout<<"Emp destroyed"<<endl;
    }
};
class Man : public Emp{
    public:
    Man(){
        cout<<"manager constructor"<<endl;
    }
    ~Man(){
        cout<<"man destroyed"<<endl;
    }
};
class Family{
    public:
    Family(){
        cout<<"family constructor"<<endl;
    }
    ~Family(){
        cout<<"family destroyed"<<endl;
    }
};

class Director: public Family , public Man {
    public:
    Director(){
        cout<<"director constructor"<<endl;
    }
    ~Director(){
        cout<<"Director destroyed"<<endl;
};
// class Director:  public Man , public Family {
//     public:
//     Director(){
//         cout<<"director constructor"<<endl;
//     }
};

int main(){
    // Emp e; only emp
    // Man m; emp and man
     Director d;// emp , man and family and direc = flow
return 0;
}