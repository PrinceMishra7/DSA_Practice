#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    static bool compare(pair<char,int>& p1,pair<char,int>& p2){
        return p1.second > p2.second;
    }
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> umap;

        for(auto it: s){
            umap[it]++;
        }

        vector<pair<char,int>> freq;

        for(auto it:umap){
            freq.push_back({it.first,it.second});
        }
        sort(freq.begin(),freq.end(),compare);
        
        for(auto it:freq){
            
            for(int i=1;i<=it.second;i++){
                ans+=it.first;
            }
        }
        return ans;

    }
};
int main(){
    
    return 0;
}