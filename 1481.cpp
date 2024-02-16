#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    static bool customSort(pair<int,int>& p1,pair<int,int>& p2){
        if(p1.second<p2.second) return true;
        return false;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> umap;
        for(auto it:arr){
            umap[it]++;
        } 

        vector<pair<int,int>> freq;
        for(auto it:umap){
            freq.push_back({it.first,it.second});
        }

        sort(freq.begin(),freq.end(),customSort);
        int cnt=0;
        for(auto it:freq){
            if(k==0) break;
            if(it.second<=k){
                k=k-it.second;
                cnt++;
            }
        }

        int uniqueEle=freq.size()-cnt;
        return uniqueEle;


    }
};
int main(){
    
    return 0;
}