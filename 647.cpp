#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool palindromic(string str){
        int left=0;
        int right=str.size()-1;
       
        while(left<=right){
            if(str[left]!=str[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    int countSubstrings(string str) {
        int cnt=0;
        int n=str.size();
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=i;j<n;j++){
                temp+=str[j];
                
                if(palindromic(temp)) cnt++;
            }
        }
        
        return cnt;
        
    }
};
int main(){
    
    return 0;
}