#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // method 1 -> divide by 2
        if(n<=0) return false;

        // while(n!=0){
        //     if(n==1) return true;
        //     if(n%2==0) n=n/2;
        //     else return false;
        // }
        // return false;

        // divide by 2
        // if(n<=0) return false;

        // 16 -> 10000 
        // count the set bit
        // int x=1;
        // int cnt=0;
        // while(n){
        //     if(n&x==1) cnt++;
        //     n=n>>1; 
        // }
        // if(cnt==1) return true;
        // return false;

        // find out the value of log2(n)
       // get the ceil and floor value 
       // if ceil and floor value are same then it is a power of 2

       int cl=ceil(log2(n));
       int flr=floor(log2(n));

       if(cl==flr) return true;
       return false;


    }
};
int main(){
    
    return 0;
}