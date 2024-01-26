#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int func(int i,int j,int m,int n,int maxMove,int move,vector<vector<vector<int>>>& dp){
        int mod=1e9+7;
        if(move>maxMove) return 0;
        if(i<0 || i>=m) return 1;
        if(j<0 || j>=n) return 1;
        if(dp[i][j][move]!=-1) return dp[i][j][move];
        long long int up=0,down=0,right=0,left=0;
        up=func(i-1,j,m,n,maxMove,move+1,dp)%mod;
        down=func(i+1,j,m,n,maxMove,move+1,dp)%mod;
        right=func(i,j+1,m,n,maxMove,move+1,dp)%mod;
        left=func(i,j-1,m,n,maxMove,move+1,dp)%mod;

        return dp[i][j][move]=(up+down+right+left)%mod;


    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        return func(startRow,startColumn,m,n,maxMove,0,dp);
    }
};
int main(){
    
    return 0;
}