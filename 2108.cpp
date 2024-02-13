#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPalindrome(string str){
        int left=0;
        int right=str.size()-1;
        while(left<=right){
            if(str[left]!=str[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {

        for(auto it:words){
            if(isPalindrome(it)) return it;
        }

        return "";
    }
};
int main(){
    
    return 0;
}