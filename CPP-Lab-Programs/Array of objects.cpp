
#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int price;

    void input() {
        cout << "Enter car model: ";
        cin >> model;

        cout << "Enter car price: ";
        cin >> price;
    }

    void display() {
        cout << model << ": " << price << endl;
    }
};

int main() {
    Car c[3];

    cout << "Enter details of 3 cars:" << endl;

    for (int i = 0; i < 3; i++) {
        c[i].input();
    }

    cout << "\nCar Details:" << endl;

    for (int i = 0; i < 3; i++) {
        c[i].display();
    }

    return 0;
}
