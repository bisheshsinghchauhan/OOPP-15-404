#include <iostream>
using namespace std;
void reference(float &salary) {
    salary = salary * 1.10;
}
void pointer(float *salary) {
    *salary = *salary * 1.10;
}
int main() {
    float s1 = 10000, s2 = 10000;
    reference(s1);
    pointer(&s2);

    cout << "Reference Salary: " << s1 << endl;
    cout << "Pointer Salary: " << s2;

    return 0;
}