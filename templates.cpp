
#include <iostream>
using namespace std;
template <class T>
class calculater{
    private:
    T num1,num2;
    public:
    calculater(T num1,T num2){
     this-> num1 = num1; 
     this-> num2 = num2;
    }
    T addnum(){
        return num1+num2;
    }
    T Subnum(){
        return num1-num2;
    }
    T mulnum(){
        return num1*num2;
    }
    
};
int main() {
    calculater<int>a1(5,10);
    cout<<a1.addnum()<<endl;
    cout<<a1.Subnum()<<endl;
    cout<<a1.mulnum()<<endl<<endl;
    
    calculater<float>a2(5.3,10);
    cout<<a2.addnum()<<endl;
    cout<<a2.Subnum()<<endl;
    cout<<a2.mulnum()<<endl;
    
    
    
    return 0;
}