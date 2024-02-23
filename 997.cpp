#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

    int findJudge(int n, vector<vector<int>>& trust){
        int ans=-1;
        vector<vector<int>> vec(n+1,vector<int>(2,0));
        for(int i=0;i<trust.size();i++){
            vec[trust[i][0]][0]=1;
            vec[trust[i][1]][1]+=1;
        }
        for(int i=1;i<vec.size();i++){
            if(vec[i][0]==0 && vec[i][1]==n-1){
                ans=i;
            }
        }
        return ans;
    }
    

};
int main(){
    
    return 0;
}