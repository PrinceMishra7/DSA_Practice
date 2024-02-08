#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int func(int num,vector<int>& dp){
        if(num==0) return 0;
        if(dp[num]!=-1) return dp[num];
        // try all possible way i.e. start from 1 and go till sqrt(num)
        // and take minimum of all
        int ans=INT_MAX;
        for(int i=1;i*i<=num;i++){
            int steps=1+func(num-i*i,dp);
            ans=min(ans,steps);
        }
        return dp[num]=ans;
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
      int ans=func(n,dp);
      return ans;

    }
};
int main(){
    
    return 0;
}