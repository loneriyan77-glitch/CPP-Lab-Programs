#include <iostream>
using namespace std;
class Employee {
public:
    string name;  //class variable
    string company; //class variable
    int age; //class variable
    void showEmployee() {
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
    }
    Employee(string name, string company ,int age) { //parameters
       this ->name = name;  //use  this -> cause name and name
         this ->company = company;
         this ->age = age;

    }

};

int main() {

    Employee employee1 = Employee(" Riyan ","Nvidia",18);
    employee1.showEmployee();

    Employee employee2 = Employee(" John ","Meta",20);
    employee2.showEmployee();
}