#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for(int i=1;i<=9;i++){
            int num=i;
            if(num>=low && num<=high) ans.push_back(num);
            for(int j=i+1;j<=9;j++){
                num=num*10+j;
                if(num>=low && num<=high) ans.push_back(num);
                else if(num>high) break;
            }
        }

        sort(ans.begin(),ans.end());


        return ans;

    }
};
int main(){
    Solution s;
    vector<int> ans=s.sequentialDigits(1000,13000);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}