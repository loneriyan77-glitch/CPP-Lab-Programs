#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    string company;
    int age;
    void showEmployee() {
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

int main() {
    int number;
    Employee employee1;
    employee1.name="Riyan";
    employee1.company="Nvidia";
     employee1.age=18;
     employee1.showEmployee();
    Employee employee2;
    employee2.name="John";
    employee2.company="Meta";
    employee2.age=20;
    employee2.showEmployee();
}