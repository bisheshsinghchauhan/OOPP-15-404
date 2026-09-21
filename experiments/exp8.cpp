#include <iostream>
using namespace std;
class Number {
    int value;
public:
    void getData() {
        cin >> value;
    }
    void display() {
        cout << "Result = " << value << endl;
    }
    Number add(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
};
int main() {
    Number n1, n2, result;
    cout << "Enter first number: ";
    n1.getData();
    cout << "Enter second number: ";
    n2.getData();
    result = n1.add(n2);
    result.display();
    return 0;
}