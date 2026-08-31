#include <iostream>
using namespace std;
class Student {
private:
    int roll;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display() {
        cout << roll <<"\t "<<name<<"\t"<<marks<<endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student* students = new Student[n];
    Student* pointer = students;
    for (int i = 0; i < n; i++) {
        cout << "\tStudent " << i + 1 << endl;
        (pointer + i)->input();
    }
    
    cout << "\nRoll\tName\tMarks\n";
    for (int i = 0; i < n; i++) {
        (pointer + i)->display();
    }
    delete[] students;
    return 0;
}