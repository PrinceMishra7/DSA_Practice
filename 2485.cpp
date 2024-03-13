#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int pivotInteger(int n) {
        
        vector<int> preSum(n+1,0);
        int sum=0;

        for(int i=1;i<=n;i++){
            preSum[i]=i+preSum[i-1];
        }
        int totalSum=preSum[n];
        // compare preSum[i] and totalSum-preSum[i]+i

        for(int i=1;i<=n;i++){
            if(preSum[i]==totalSum-preSum[i]+i) return i;
        } 

        return -1;







    }
};
int main(){
    
    return 0;
}