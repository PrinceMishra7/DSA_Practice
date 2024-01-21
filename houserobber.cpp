#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int func(int ind,vector<int>& nums,vector<int>& dp){
        if(ind>=nums.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int take=nums[ind]+func(ind+2,nums,dp);
        int notTake=func(ind+1,nums,dp);

        return dp[ind]=max(take,notTake);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+2,-1);

        int ans=func(0,nums,dp);
        return ans;
    }
};
int main(){
    
    return 0;
}