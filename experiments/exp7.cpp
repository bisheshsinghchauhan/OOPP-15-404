#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    static int totalStudents;

public:
    Student(int m) {
        marks = m;
        totalStudents++;
    }
    friend void showMarks(const Student &s);

    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

void showMarks(const Student &s) {
    cout << "Student Marks: " << s.marks << endl;
}

int main() {
    Student s1(85);
    Student s2(90);

    showMarks(s1);
    showMarks(s2);

    Student::showTotalStudents();

    return 0;
}