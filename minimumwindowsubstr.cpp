#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int acquire=0;
        int release=0;
        unordered_map<char,int> charInt;
        for(auto it:t) charInt[it]++;
        string ans="";
        unordered_map<char,int> charIns; 
        int matchCnt=0;
        int desiredCnt=t.length();
        while(true){

            bool fl1=false,fl2=false;
            // acquire the character

            while(acquire<n && matchCnt!=desiredCnt){

                char ch=s[acquire];
                charIns[ch]++;

                // increment match cnt in case if it is part of t and its cnt is less than 
                // cnt of char in t

                if(charInt.find(ch)!=charInt.end() && 
                charIns[ch]<=charInt[ch]){
                    // we have acquired a needed guy
                    matchCnt++;
                }

                acquire++;
                fl1=true;

            }

            // once we got any substr that gives desired match cnt then we can start 
            // collecting answer and releasing the char

            while(release<acquire && matchCnt==desiredCnt){
                // release to acquire-1 would be substr that is giving me dmcnt
                string temp=s.substr(release,acquire-release);

                // update answer 
                if(ans.length()==0 || ans.length()>temp.length()){
                    ans=temp;
                }

                // release
                char chr=s[release];
                    // if its a important char
                if(charInt.find(chr)!=charInt.end()){
                    if(charIns[chr]>charInt[chr]){

                    }
                    else{
                        matchCnt--;
                    }
                }

                if(charIns[chr]>1)charIns[chr]--;
                else charIns.erase(chr);
                release++;
                fl2=true;

            }

            if(!fl1 && !fl2) break;

        }

        return ans;
    }
};
int main(){
    
    return 0;
}