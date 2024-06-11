#include <iostream>
using namespace std;
void fact(int n,int r){
    int fact = 1;
    for(int i = 1; i<=n;i++)
     fact *= i ;
     
     int rfact = 1;
    for(int j = 1; j<=r;j++)
    rfact *= j;
    
    int min = n-r;
    //cout<<min;
    int nr = 1;
    for(int k =1;k<=min;k++)
    nr *=k;
    int per = (fact/(rfact*nr));
    cout<<per;
}
int main() {
    cout<<"Enter the number N : ";
    int num,re ;
    cin>>num;
    cout<<"Enter the number R: ";
    cin>>re;
   fact(num,re);
    return 0;
}