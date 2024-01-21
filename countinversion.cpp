#include<bits/stdc++.h>

using namespace std;

long long merge(long long *arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    long long cnt=0;
    while(left<=mid && right<=high){

        // if left element is greater then inversion pair will be there
        if(arr[left]>arr[right]){
            // copy the right element into temp
            temp.push_back(arr[right]);
            right++;
            // increase the inversion count 
            cnt+=(mid-left+1);
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

    return cnt;


}
long long mergeSort(long long *arr,int low,int high){
    long long cnt=0;
    if(low>=high) return cnt; 
    int mid=(low+high)/2;
    cnt+=mergeSort(arr,low,mid);
    cnt+=mergeSort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
long long getInversions(long long *arr, int n){
    return mergeSort(arr,0,n-1);
}
int main(){
    
    return 0;
}