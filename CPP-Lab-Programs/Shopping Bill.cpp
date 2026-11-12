
#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    void input() {
        cout << "Enter item name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    double totalBill() {
        return price * quantity;
    }

    void display() {
        cout << name << ": " << price
             << " x " << quantity << endl;

        cout << "Total bill = " << totalBill() << endl;
    }
};

int main() {
    Product p;

    p.input();
    p.display();

    return 0;
}
