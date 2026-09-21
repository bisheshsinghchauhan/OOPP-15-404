#include <iostream>
using namespace std;

class Student {
public:
    string name, branch;
    int roll;

    void input() {
        cin >> name >> roll >> branch;
    }

    void show() {
        cout << name << " " << roll << " " << branch << endl;
    }
};

int main() {
    Student s1, s2;
    s1.input();
    s2.input();
    s1.show();
    s2.show();
}