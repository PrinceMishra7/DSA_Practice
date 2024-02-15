#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        vector<long long int> prefixSum(n,0);
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefixSum[i]=sum;
        }
        int ans=-1;
        for(int i=2;i<n;i++){
            if(prefixSum[i-1]>nums[i]){
                ans=i;
            }
        }
        if(ans!=-1) return prefixSum[ans];
        return ans;

    }
};
int main(){
    
    return 0;
}