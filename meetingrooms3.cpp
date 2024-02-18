

#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        
        vector<int> meetCnt(n,0);
        vector<long long > status(n,0);
        for(auto it:meetings){
            int start=it[0];
            int end=it[1];

            // traverse in status to find out the first empty room
            // to handle case where all rooms are occuoied
            // keep track of minimum end time of meetings going on

            bool found=false;
            long long int mini=1e18;
            int miniInd=n;
            for(int i=0;i<n;i++){
                if(status[i]==0 || start>=status[i]){
                    status[i]=end;
                    meetCnt[i]++;
                    found=true;
                    break;
                }

                if(status[i]<mini){
                    mini=status[i];
                    miniInd=i;
                }
            }

            if(!found){
                status[miniInd]=mini+(end-start);
                meetCnt[miniInd]++;
            }


        }

        long long int maxi=INT_MIN;
        int maxInd=n;
        for(int i=0;i<n;i++){
            if(meetCnt[i]>maxi){
                maxi=meetCnt[i];
                maxInd=i;
            }
        }
        return maxInd;

    }
};
int main(){
    
    return 0;
}