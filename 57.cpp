#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
        vector<vector<int>> temp;
        temp.push_back(intervals[0]);
        int n=intervals.size();
        int last=intervals[0][1];
        for(int i=1;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];

            if(start>last){
                temp.push_back(intervals[i]);
                last=end;
            }
            else{
                temp.back()[1]=max(last,end);
                last=max(last,end);
            }
        }

        return temp;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        // inserting the new interval
        vector<vector<int>> temp;
        int i=0;
        for(i=0;i<n;i++){
            if(intervals[i][0]<newInterval[0]){
                temp.push_back(intervals[i]);
            }
            else{
                break;
            }
        }
        temp.push_back(newInterval);

        for(int j=i;j<n;j++){
            temp.push_back(intervals[j]);
        }

        // merge
        return mergeIntervals(temp);
        

    }
};
int main(){
    
    return 0;
}