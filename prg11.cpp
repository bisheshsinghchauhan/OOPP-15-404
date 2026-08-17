#include <iostream>
#include <memory>
using namespace std;
class Student {
public:
    Student() {
        cout << "Student created" << endl;
    }
    ~Student() {
        cout << "Student destroyed" << endl;
    }
    void display() {
        cout << "Smart pointer manages memory safely." << endl;
    }
};
int main() {
    unique_ptr<Student> p1 = make_unique<Student>();
    p1->display();
    shared_ptr<Student> p2 = make_shared<Student>();
    shared_ptr<Student> p3 = p2;
    cout << "Shared pointer count: " << p2.use_count() << endl;
    return 0;
}