#include <iostream>
using namespace std;

int fact(int n) {
    if (n > 0) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}

int power(int n) {
    if (n == 0) return 1;
    return 2 * power(n - 1);
}

int fibbo(int m) {
    if (m == 0) return 0;
    if (m == 1) return 1;
    return (fibbo(m - 1) + fibbo(m - 2));
}

int climbStairs(int n) {
    if (n <= 1 ) return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

bool sorted(int arr[],int size){
    if(size == 0 || size == 1)return true;
    if(arr[0]>arr[1]){
        return false;
    }
else{
    return sorted(arr +1,size - 1);
}
}
int sumArray(int arr[],int size){
 if(size == 0 )return 0;
 if(size == 1)  return arr[0];
    
    return arr[0] + sumArray (arr +1,size - 1);
}   

int main() {
    int n;
    int arr[5] = {1,2,4,3,5};
    cin >> n;
    
    cout << "fact " << fact(n) << endl;
    cout << "power " << power(n) << endl;
    cout << "fibbo " << fibbo(n) << endl;
    cout << "climbStairs " << climbStairs(n) << endl;
    
    cout<< sorted(arr,5)<<endl;
    cout<<sumArray(arr,5);
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n){
    if(n == 0)return;
    // cout << n<<endl;
    print(n-1);
    cout<<n<<endl;
}
int main() {
    // Write C++ code here
   print(10);

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int row,col ;
  cin >>row>>col;
  //dynamic
  int **arr = new int*[row];
  for(int i = 0;i<row;i++){
      arr[i]=new int[col];
  }
  //input 2d
  for(int i = 0;i<row;i++){
      for(int j = 0;j<col;j++){
          cin >> arr[i][j];
      }
  }
  //print
  for(int i = 0;i<row;i++){
      for(int j = 0;j<col;j++){
          cout<< arr[i][j]<<" ";
      }
      cout<<endl;
  }
  //deallocation
  for(int i = 0; i<row;i++){
      delete []arr[i];
  }
  delete []arr;
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n ;
  cin >> n;
  //dynamic
  int **arr = new int*[n];
  for(int i = 0;i<n;i++){
      arr[i]=new int[i];
  }
  //input 2d
  for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
          cin >> arr[i][j];
      }
  }
  //print
  for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
          cout<< arr[i][j]<<" ";
      }
      cout<<endl;
  }
  //deallocation
  for(int i = 0; i<n;i++){
      delete []arr[i];
  }
  delete []arr;
    return 0;
}