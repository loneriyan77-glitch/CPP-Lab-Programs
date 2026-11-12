#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    int marks1, marks2, marks3;
    int total;
    double average;
    void input() {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll no: ";
        cin>>rollno;

        cout<<"Enter marks1: ";
        cin>>marks1;

        cout<<"Enter marks2: ";
        cin>>marks2;

        cout<<"Enter marks3: ";
        cin>>marks3;


    }
    void calculatetotal() {
        total=marks1+marks2+marks3;
    }
    void calculateaverage() {
        average=((total)/3.0);

    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;


    }

};
int main() {
    Student s1;
    s1.input();
    s1.calculatetotal();
    s1.calculateaverage();
    s1.display();
    return 0;
}