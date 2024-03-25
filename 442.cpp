#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> freqArr(n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(freqArr[nums[i]]==1){
                freqArr[nums[i]]++;
                ans.push_back(nums[i]);
            }
            else{
                freqArr[nums[i]]++;
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}