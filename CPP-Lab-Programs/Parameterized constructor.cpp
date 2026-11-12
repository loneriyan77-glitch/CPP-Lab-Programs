
#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c1(7);
    Circle c2(3.5);

    cout << "Area = " << c1.area() << endl;
    cout << "Area = " << c2.area() << endl;

    return 0;
}
