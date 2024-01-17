class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        vector<int> freq;
        for(auto it:mpp){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end());
        for(int i=1;i<freq.size();i++){
            if(freq[i]==freq[i-1]) return false;
        }
        return true;
    }
};