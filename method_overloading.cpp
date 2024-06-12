#include <iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(double num1,double num2){
    cout<< num1+num2<<endl;
}
void add(int n1,int n2,int n3){
    cout<< n1+n2+n3<<endl;
}
int main() {
   add(4,5);
  add(4.5,4.7);
  add(6,7,8);
    return 0;
}