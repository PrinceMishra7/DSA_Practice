#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // blindly using brick first will fail the below test case
        // [1,5,1,2,3,4,10000]

        // keep track of max no. of brick used previously
        // at any moment if bricks count goes negative then at the place were we used 
        // max no. of bricks should get replaced by 1 ladder , this is how we can use brick
        // and ladder optimally
        int n=heights.size();
        priority_queue<int> pq;
        int i;
        for(i=0;i<n-1;i++){
            int hdiff=heights[i+1]-heights[i];

            if(hdiff<=0) continue;

            bricks-=hdiff;
            pq.push(hdiff);

            if(bricks<0){
                bricks+=pq.top();
                pq.pop();
                ladders-=1;
            }

            if(ladders<0) break;
        } 

        return i; 


    }
};
int main(){
    
    return 0;
}