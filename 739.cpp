#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> nextGreater(vector<int>& temperatures){
        int n=temperatures.size();
        vector<int> nge(n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i]=n;
            }
            else{
                nge[i]=st.top();
            }
            st.push(i);
        }
        return nge;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> nge=nextGreater(temperatures);
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            if(nge[i]!=n) nge[i]=nge[i]-i;
            else nge[i]=0;
        }
        return nge;
    }
};
int main(){
    
    return 0;
}