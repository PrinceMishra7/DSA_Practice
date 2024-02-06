#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,int>> strs1;
        
        int n=strs.size();

        for(int i=0;i<n;i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            strs1.push_back({str,i});
        }

        unordered_map<string,vector<string>> mpp;

        for(auto it:strs1){
            mpp[it.first].push_back(strs[it.second]);
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