
#include <iostream>
using namespace std;

class Box {
public:
    double length, breadth, height;

    Box() {
        length = 1;
        breadth = 1;
        height = 1;
    }

    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {
    Box b1;
    Box b2(2, 3, 4);

    cout << "Volume = " << b1.volume() << endl;
    cout << "Volume = " << b2.volume() << endl;

    return 0;
}
