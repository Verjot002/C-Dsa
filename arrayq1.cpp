#include <iostream>
#include <set>
using namespace std;
int main() {
   int arr[7]={1,1,2,2,2,3,3};
    set<int>s;
    for(int i = 0;i<7;i++){
        s.insert (arr[i]);
    }
    int size = 0;
    for(int item:s){
        arr[size++] = item;
    }
  for(int j:arr){
        cout<<j<<" ";
    }
    
    
    return 0;
}
/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[7]={1,1,2,2,2,3,3};
     int j = 0;
    for(int i = 0;i<7;i++){
     
            if(arr[j]!=arr[i]){
                j++;
                arr[j] = arr[i];
            
        }
    }
    for(int item : arr)
    {
        cout<<item<<" ";
    }

    return 0;
}
*/