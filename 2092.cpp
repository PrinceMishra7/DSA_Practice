#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
       vector<int> vis(n,0);
       vector<pair<int,int>> adjList[n];
        for(auto it:meetings){
            adjList[it[0]].push_back({it[1],it[2]});
            adjList[it[1]].push_back({it[0],it[2]});
        }

       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
       pq.push({0,0});
       pq.push({0,firstPerson});
       while(!pq.empty()){
           pair<int,int> pr=pq.top();
           pq.pop();
           int node=pr.second;
           int time=pr.first;
           if(vis[node]==1) continue;
           vis[node]=1;
           for(auto it:adjList[node]){
               int adjNode=it.first;
               int meetTime=it.second;
               if(vis[adjNode]!=1  && meetTime>=time){
                   pq.push({meetTime,adjNode});
               }
           }
       }

       vector<int> ans;
       for(int i=0;i<n;i++){
           if(vis[i]==1){
               ans.push_back(i);
           }
       }
       return ans;
    }
};
int main(){
    
    return 0;
}