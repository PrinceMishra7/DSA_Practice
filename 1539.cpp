#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // [2,3,4,7,11] k=5
        // 2<5 k++
        // 3<6 k++
        // 4<7 k++
        // 7<8 k++
        // 11>9 return k

        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k) k++;
            else break;
        }
        return k;
    
    }
};
int main(){
    
    return 0;
}