#include <iostream>
//encapsulation
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string name,int age){
        this->name= name;
        this->age = age;
    }
    void setAge(int age){
        this->age =age;
        
    }
    int getAge(){
        return age;
    }
    void setName(string name){
        this->name =name;
        
    }
    string getName(){
        return name;
    }
};
int main() {
     person s1("jot",21);
     cout<<"Name : "<<s1.getName()<<" ||  age : "<<s1.getAge()<<endl;
     s1.setName("verjot");
     s1.setAge(22);
     cout<<"Name : "<<s1.getName()<<endl;
     cout<< "age : "<<s1.getAge()<<endl;
    return 0;
}