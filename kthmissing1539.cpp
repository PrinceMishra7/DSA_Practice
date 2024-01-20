#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

       int low=0,high=arr.size()-1;


       while(low<=high){
           int mid=(low+high)/2;
           
           // expected number at this position
           int expctd=mid+1;
           // actual number present at this position
           int actl=arr[mid];

           // if actl is greater than expctd than it means that (actl-expctd)
           // no. of +ve numbers are missed
           
           // if the no. of missed are less than k then move to right side
           if(actl-expctd<k){
               low=mid+1;
           } 
           else{
               high=mid-1;
           }

       }


       return low+k;

    }
};
int main(){
    
    return 0;
}