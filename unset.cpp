// unordered set
#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int>uset = {5,3,9,7,1};
    uset.insert(20);
    uset.erase(1);
    for(int i : uset){
        cout<<i<<" ";
    }

    return 0;
}