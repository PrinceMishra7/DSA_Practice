#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        while(n!=0){
            if(n==1) return true;
            if(n%2==0) n=n/2;
            else return false;
        }
        return false;
    }
};
int main(){
    
    return 0;
}