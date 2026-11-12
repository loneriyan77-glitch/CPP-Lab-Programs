
#include <iostream>
using namespace std;

class Rectangle {
public:
    double length; //Data Members
    double breadth;

    void input() {  //Member Function
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area() { //Member Function
        double a;
        a = length * breadth;

        cout << "The area is: " << a << endl;
    }

    void perimeter() { //Member Function
        double p;
        p = 2 * (length + breadth);

        cout << "The perimeter is: " << p << endl;
    }
};

int main() {

    Rectangle r1;

    r1.input();
    r1.area();
    r1.perimeter();

    return 0;
}
