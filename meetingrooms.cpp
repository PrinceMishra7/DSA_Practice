/*
Description
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), determine if a person could attend all meetings.

Input: intervals = [(0,30),(5,10),(15,20)]
Output: false
Explanation: 
(0,30), (5,10) and (0,30),(15,20) will conflict
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
    bool canAttendMeetings(vector<Interval> &intervals) {
        // Write your code here

        sort(intervals.begin(),intervals.end(),customSort);
        int n=intervals.size();
        for(int i=1;i<n;i++){
            Interval i1=intervals[i-1];
            Interval i2=intervals[i];
            if(i2.start<i1.end) return false;
        }
        return true;

    }
};

int main(){
    
    return 0;
}