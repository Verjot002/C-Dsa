#include <iostream>
// friend functions 
using namespace std;
 class emp{
      private:
      long int accno;
      public:
      friend void print(emp);
      emp(){
          accno = 8765434567;
      }
  };
  void print( emp e){
      cout<<e.accno<<endl;
  }
int main() {
 emp e1;
print(e1); 
  

    return 0;
}