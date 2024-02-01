#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<=n-3;i=i+3){
            if(nums[i+2]-nums[i]<=k) continue;
            else return ans;
        }

        for(int i=0;i<=n-3;i=i+3){
           ans.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return ans;
        
        
    }
};
int main(){
    
    return 0;
}