#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       
       int cnt=0;
       while(left!=right){
           left=left>>1;
           right=right>>1;
           cnt++;
       }
       return left<<cnt;

    }
};
int main(){
    
    return 0;
}