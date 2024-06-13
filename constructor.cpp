#include <iostream>
using namespace std;
class student{
    public :
    int age;
    string name;
    student(){
        cout<<"Student Info"<<endl;
    }
    student(string name,int age){
        this->name = name;
        this->age = age;
    }
    student(student &stu){
        name = stu.name;
    }
    
   // ~student(){
     //   cout<<"Distructor called!!";
    //}
    
    void diplay(){
        cout<<"Student name : "<<name<<" and Student age : "<<age<<endl;
    }
};
int main() {
    student s1;
    student s2("Verjot",21);
    student s3(s2);
    cout<<"This is a copy : Name - "<< s3.name<<endl;
    s2.diplay();

    return 0;
}