#include <iostream>
using namespace std;
class Student {
    string name;
    int roll;

public:
    void input() {
        cin >> name >> roll;
    }
    void show() {
        cout << name << " " << roll;
    }
};
int main() {
    Student s;
    s.input();
    s.show();
}