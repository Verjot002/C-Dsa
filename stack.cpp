// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int prefixEval(string s){
    
    stack<int>st;
    for(int i = s.length()-1;i>0;i--){
        if(s[i]>='0'&& s[i]<='9')
        {
          st.push(s[i]-'0') ; 
        }
        else{
            int opt1 = st.top();
            st.pop();
            int opt2 = st.top();
            st.pop();
            
            switch(s[i]){
                case '+':
                st.push(opt1+opt2);
                break;
                case '-':
                st.push(opt1-opt2);
                break;
                 case '/':
                st.push(opt1/opt2);
                break;
                 case '*':
                st.push(opt1*opt2);
                break;
                 case '^':
                st.push(pow(opt1,opt2));
                break;
                default:
                break;
                
            }
        }
    }
    return st.top();
}
int main() {
     cout<<prefixEval("-+7*45+20");
   
    return 0;
}