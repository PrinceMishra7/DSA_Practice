#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int func(int ind,vector<int>& arr, int k,int n,vector<int>& dp){
        if(ind==n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int maxi=INT_MIN;
        int sum=0;
        int maxSum=INT_MIN;
        int len=0;
        for(int i=ind;i<min(n,ind+k);i++){
            len++;
            // keep track of max element
            maxi=max(maxi,arr[i]);
            sum=len*maxi+func(i+1,arr,k,n,dp);
            maxSum=max(maxSum,sum);
        }

        return dp[ind]=maxSum;

    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n+1,-1);
        return func(0,arr,k,n,dp);
    }
};
int main(){
    
    return 0;
}