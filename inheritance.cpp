#include <iostream>
//Inheritance
using namespace std;
class Student{
    public:
    void show(){
        cout<<"this is a student class"<<endl;
    }
};
class Teacher : public Student{
    public:
    void display(){
        cout<<" this is a teacher class";
    }
    
};
int main() {
    Student s1;
    Teacher t1;
    s1.show();
   // s1.display();
    t1.display();

    return 0;
}

/*
anther examples 
#include <iostream>
using namespace std;
class base{
    public :
    void print(){
        cout<<"Base class"<<endl<<endl;
    }
};
class derieved :public base{
    public:
    void print(){
        cout<<"Derieved class"<<endl<<endl;
    }
};
int main() {
   derieved d1;
   base b1;
   
   base *ptr = &d1;
   ptr->print();
   
   derieved *ptr2 = &d1;
   ptr2->print();
   

    return 0;
}*/