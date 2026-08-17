#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b = 2) {
    return a * b;
}
// Function overloading
int calculate(int a, int b) {
    return a - b;
}
float calculate(float a, float b) {
    return a / b;
}
int main() {
    // cout << "Addition: " << add(5, 3) << endl;
    //overloading hue hai
    cout << "Multiplication: " << multiply(5) << endl;
    cout << "Subtraction: " << calculate(5, 3) << endl;
    cout << "Division: " << calculate(10.0f, 2.0f) << endl;
    cout<< "Multiplication with default parameter: " << multiply(5, 3) << endl;
    return 0;
}