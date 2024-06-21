//set
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> set1 = {4,2,5,6,9}; 
    //set<int,greater<int>> set2 = {4,2,5,6,9}; 
    set1.insert(10);
    set1.erase(2);
 for(int i : set1){
     cout<<i<<" "<<endl;
 }
 cout<<"Size of set1 :"<<set1.size();
 
// for(int j : set2){
 //   cout<<j<<" ";
 //}
    return 0;
}