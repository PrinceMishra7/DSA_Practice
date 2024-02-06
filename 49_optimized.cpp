#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       

        int n=strs.size();
        unordered_map<string,vector<string>> mpp;
        for(int i=0;i<n;i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            mpp[str].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto it:mpp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
int main(){
    
    return 0;
}