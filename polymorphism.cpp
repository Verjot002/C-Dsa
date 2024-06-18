#include <iostream>
using namespace std;
class base{
    public :
     virtual void print(){
        cout<<"Base class"<<endl<<endl;
    }
};
class derieved :public base{
    public:
    void print() override {
        cout<<"Derieved class"<<endl<<endl;
    }
};
int main() {
   derieved d1;
   base b1;
   
   base *ptr = &d1;
   ptr->print();
   
   //derieved *ptr2 = &d1;
   //ptr2->print();
   

    return 0;
}