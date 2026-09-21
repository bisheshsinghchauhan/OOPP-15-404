#include <iostream>
using namespace std;
int main() {
    float salary = 10000;
    float *newSalary = &salary;

    *newSalary = *newSalary * 1.10;

    cout << "Salary: " << salary;
    return 0;
}