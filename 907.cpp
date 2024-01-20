#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int m=1e9+7;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int mini=arr[i];
            for(int j=i;j<n;j++){
                if(arr[j]<mini) mini=arr[j];
                sum=sum%m+mini%m;
            }
        }
        cout<<sum<<endl;
        return sum%m;
    }
};
int main(){
    
    return 0;
}