#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> hash(26,0);
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }

        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']==1) return i;
        }
        return -1;
    }
};
int main(){
    
    return 0;
}