#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Object destroyed: " << name << endl;
    }
};

int main() {
    Student s1;                  // Default constructor
    Student s2(101, "Rahul");     // Parameterized constructor
    Student s3 = s2;              // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0; // Destructors called automatically
}