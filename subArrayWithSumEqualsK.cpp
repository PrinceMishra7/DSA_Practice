#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        unordered_map<int,int> preSumMap;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) cnt++;
            int target=sum-k;
            if(preSumMap.find(target)!=preSumMap.end()){
                cnt+=preSumMap[target];
            }
            preSumMap[sum]++;
        }
        return cnt;
    }
};
int main(){
    
    return 0;
}