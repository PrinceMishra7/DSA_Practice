#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long int sum1=1LL*n*(n+1);
        sum1=sum1/2;
        long long int sum2=accumulate(nums.begin(),nums.end(),0);
        return abs(sum1-sum2);
    }
};
int main(){
    
    return 0;
}