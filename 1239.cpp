class Solution {
    public:
    bool hasDuplicate(string str1,string str2){
        vector<int> hash(26,0);

        for(int i=0;i<str1.size();i++){
            hash[str1[i]-'a']++;
        }
        for(int i=0;i<str2.size();i++){
            hash[str2[i]-'a']++;
        }
        for(int i=0;i<26;i++) if(hash[i]>1) return true;
        return false;
    }
    int func(int ind,vector<string>& arr,string cur){
        
        if(ind==arr.size()) return cur.size();
        
        int include=0;
        int exclude=0;
        if(hasDuplicate(cur,arr[ind])){
            exclude=func(ind+1,arr,cur);
        }
        else{
            include=func(ind+1,arr,cur+arr[ind]);
            exclude=func(ind+1,arr,cur);
        }
        return max(include,exclude);
    }
public:
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        string cur="";
        int maxi=func(0,arr,cur);
        return maxi;
    }
};