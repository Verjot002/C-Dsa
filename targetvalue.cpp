// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,2,5,10,1,7};
    int target;
    cin>>target;
    for(int i = 0;i<6;i++){
        for(int j = i+1;j<6;j++){
            if(arr[i] + arr[j] == target){
                cout<<"Index "<<i<< " and "<<j<<" equal to target value" ;
            }
        }
    }
    return 0;
}