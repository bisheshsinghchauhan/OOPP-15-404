#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main() {
    Calculator obj;
    cout << "Integer addition: " << obj.add(10, 20) << endl;
    cout << "Float addition: " << obj.add(10.5f, 20.5f) << endl;
    cout << "Three integer addition: " << obj.add(10, 20, 30) << endl;
    return 0;
}