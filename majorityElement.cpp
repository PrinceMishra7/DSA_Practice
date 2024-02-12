#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                ele=i;
                cnt=1;
            }
            else if(nums[i]==nums[ele]){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        return nums[ele];
    }
};
int main(){
    
    return 0;
}