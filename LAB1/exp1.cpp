#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void input() {
        cin >> roll >> name >> marks;
    }
//
    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }
};
int main() {
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}