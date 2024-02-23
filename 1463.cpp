#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int solve(int i,int j1,int j2,int col,int row,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp){
        // out of bound condition
        if(j1<0 || j1>=col || j2<0 || j2>=col) return -1e8;

        // reaches to last row
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        if(i==row-1){
            // if both are at same position i.e. j1==j2
            // then only one time the value will be added
            if(j1==j2){
                return dp[i][j1][j2]=grid[i][j1];
            }
            // else if they are at diiferent position
            else{
                return dp[i][j1][j2]=grid[i][j1]+grid[i][j2];
            }
        }

        int maxi=INT_MIN;
        for(int c1=-1;c1<=1;c1++){
            for(int c2=-1;c2<=1;c2++){
                int value;
                if(j1==j2){
                    value=grid[i][j1];
                }
                else{
                    value=grid[i][j1]+grid[i][j2];
                } 
                value+=solve(i+1,j1+c1,j2+c2,col,row,grid,dp);
                maxi=max(maxi,value);  
            }
        }

        return dp[i][j1][j2]=maxi;



    }
    int cherryPickup(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
        return solve(0,0,col-1,col,row,grid,dp);

    }
};
int main(){
    
    return 0;
}