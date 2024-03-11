#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> umap;
        for(auto it: s){
            umap[it]++;
        }
        string ans="";
        for(auto it:order){
            if(umap.find(it)!=umap.end()){
                int cnt=umap[it];
                for(int i=1;i<=cnt;i++) ans+=it;
                umap.erase(it);
            }
        }

        for(auto it:umap){
            int cnt=it.second;
            for(int i=1;i<=cnt;i++) ans+=it.first;
        }

        return ans;

    }
};
int main(){
    
    return 0;
}