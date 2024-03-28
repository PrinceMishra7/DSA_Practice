#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        // two pointer approach
        unordered_map<int,int> umap;
        int j=0;
        int i=0;
        int n=nums.size();
        int ans=0;
        while(j<n){
            umap[nums[j]]++;
            while(umap[nums[j]]>k && i<=j){
                umap[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;

        }

        return ans;
        
    }
};
int main(){
    
    return 0;
}