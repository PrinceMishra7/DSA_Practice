#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        

        // similar to subarray with sum k
        int n=nums.size();
        unordered_map<int,int> umap;
        umap[0]=1; // subarray with sum=0 has occured once
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int target=sum-goal;
            if(umap.find(target)!=umap.end()){
                ans+=umap[target];
            }
            umap[sum]++;
        }
        return ans;

    }
};
int main(){
    
    return 0;
}