
/*

Meeting rooms 2
Description
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), find the minimum number of conference rooms required.)

Input: intervals = [(0,30),(5,10),(15,20)]
Output: 2
Explanation:
We need two meeting rooms
room1: (0,30)
room2: (5,10),(15,20)

*/

#include<bits/stdc++.h>

using namespace std;
class Interval{
public:
    int start,end;
    Interval(int start,int end){
        this->start=start;
        this->end=end;
    }
};
class Solution{
    public:
bool static customSort(Interval& i1,Interval& i2){
        return i1.start<i2.start;
    }
    int minMeetingRooms(vector<Interval> &intervals) {
        // Write your code here
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),customSort);

        priority_queue< pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
        int maxQSize=0;
        for(int i=0;i<n;i++){

            if(!pq.empty()){
            pair<int,int> topGuy=pq.top();
            if(topGuy.first<intervals[i].start){
            pq.pop();
            
            }
            }
            
            
            pq.push({intervals[i].end,intervals[i].start});
            int size=pq.size();
            maxQSize=max(maxQSize,size);

        }
        return maxQSize;
    }
};
int main(){
vector<Interval> intervals;
intervals.push_back(Interval(0, 30));
intervals.push_back(Interval(5, 10));
intervals.push_back(Interval(15, 20));

Solution s;
int ans=s.minMeetingRooms(intervals);
cout<<"ans "<<ans<<endl;
    return 0;
}