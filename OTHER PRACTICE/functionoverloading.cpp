#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    void show() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
    void show(int a, int b) {
        x = a;
        y = b;
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;
    p.show(10, 20);
    return 0;
}