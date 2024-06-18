
#include <iostream>
using namespace std;

class A {
    int num;
public:
    A() {
        num = 10;
    }

    void operator++() {
        num += 10;
    }
    void operator--(){
        num -= 5;
    }

    void display() {
        cout << "Number: " << num << endl;
    }
};

int main() {
    A a; 
    a.display(); 
    ++a; 
    a.display();
    --a;
    a.display();
    return 0;
}