
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    double price;

    Book() {
        title = "Unknown";
        price = 0;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;

    b.display();

    return 0;
}
