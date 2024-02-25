#include<bits/stdc++.h>
#include<numeric>
// TLE
using namespace std;
class DisjointSet{
    public:
    vector<int> size;
    vector<int> parent;
    DisjointSet(int n){
        size.resize(n,1);
        parent.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }

    int findUPar(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUPar(parent[node]);
    }

    void unionBySize(int u,int v){
        int pu=findUPar(u);
        int pv=findUPar(v);
        if(pu==pv) return;
        if(size[pu]>size[pv]){
            size[pu]++;
            parent[pv]=pu;
        }
        else{
            size[pv]++;
            parent[pu]=pv;
        }
        return;
    }
};
class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        int n=nums.size();
        DisjointSet ds(n);

        // vector<pair<int,int>> pairs;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                // pairs.push_back({i,j}); 
                // cout<<"pairs "<<i<<" "<<j<<endl;
                // cout<<"GCD "<<gcd(nums[i],nums[j])<<endl;
                if(gcd(nums[i],nums[j])>1){
                    ds.unionBySize(i,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            ds.parent[i]=ds.findUPar(i);
        }
        for(int i=0;i<n-1;i++){
            if(ds.parent[i]!=ds.parent[i+1]) return false;
        }
        return true;
    }
};
int main(){
    
    return 0;
}