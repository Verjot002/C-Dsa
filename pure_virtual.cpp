
#include <iostream>
//pure virtual function
using namespace std;
class a{
    public:
    virtual void print() = 0;
};
class b : public a{
    public : 
    b(){
        print();
    };
   void print(){
     cout<<" pure virtual function";  
   } 
};
class c : public a{
    public:
    c(){
        print();
    };
    void print(){
        cout<<" pure virtual function";   
    }
};
int main() {
   b B;
   c C;
    return 0;
}