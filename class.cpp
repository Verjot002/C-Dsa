
#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int age;
    int salary;
    int experiance;
    void display1(int age,int experiance){
        cout<<"Employee age is "<<age<<" Years "<<"Work Experiance "<<experiance<<" Years"<<endl;
    }
    void display2(string name,int salary){
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }
    
};
int main() {
    Employee emp1;
    emp1.display1(21,5);
    emp1.display2("Verjot",50000);

    return 0;
}