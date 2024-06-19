// Array 
#include <iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}
//max value
void getmax(int arr[], int size){
    
    int max = arr[0];
    for(int i = 0;i<size;i++){
       if ( max < arr[i]){
           max = arr[i];
       }
    }
    cout<<"MAX "<<max<<endl;
}
//min value
void getmin(int arr[], int size){
    
    int min = arr[0];
    for(int i = 0;i<size;i++){
       if ( min > arr[i]){
           min = arr[i];
       }
    }
    cout<<"MIN "<<min<<endl;
}
//linear search
void linearSearch(int arr[],int size ,int value){
    for(int i = 0;i<size;i++){
       if ( value == arr[i]){
           cout<<" value "<<value<<" found in "<<i<<" index";
       }
    }
    cout<<endl<<endl;
}
//array reverse order
void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reverse the array "<<endl;
    
}
// array reverse alternate order
void alterreverse(int arr[],int size){
    int start = 0;
    int next = start+1;
    while(start<size && next < size){
        int temp = arr[start];
        arr[start]=arr[next];
        arr[next]=temp;
        start += 2;
        next += 2;
    }
    cout<<"alternate reverse the array "<<endl;
    
}

int main() {
   int arr[5];
   cout<<"Enter 5 number"<<endl;
   for(int i =0;i<=4;i++){
       cin>>arr[i];
   }
   
   printarr(arr,5);
   getmax(arr,5);
   getmin(arr,5);
 linearSearch(arr,5,20);
 reverse(arr,5);
 printarr(arr,5);
  alterreverse(arr,5);
  printarr(arr,5);
   //print element
   //for (int item : arr){
    //   cout<<item<<endl;
  // }

    return 0;
}