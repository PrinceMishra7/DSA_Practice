#include<bits/stdc++.h>

using namespace std;
bool canWePlace(vector<int>& stalls,int maxi,int k){

    // assume placing first cow at the first stall
    int cntCows=1; // no of cows have been placed till now
    int last=stalls[0]; // position of last cow that you have placed

    int cur=1;
    while(cur<stalls.size()){
        int dist=stalls[cur]-last;
        // move to the next stalls untill you doesn't exceed the maxi
        if(dist<maxi){
        // just move to the next stall
        cur++;
        }
        else{
        // now either we have exceeded the limit or we are equal
        // now placed your cow here and update the last and cntCows
        cntCows++;
        last=stalls[cur];
        cur++;
        }


        // the moment you have placed all the cows just return true
        if(cntCows>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.

    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    // minimum possible answer would be when cows would be placed adjacent to each other having distance of 1
    int low=1;
    // max distance between 2 cow would be when cows are placed at extremes
    int high=stalls[n-1];
    int maxDist=1;
    while(low<=high){
        int mid=(low+high)/2;

        if(canWePlace(stalls,mid,k)==true){
            // try for other max value
            low=mid+1;
            maxDist=mid;
        }
        else{
            high=mid-1;
        }

    }
    return maxDist;
}
int main(){
    
    return 0;
}