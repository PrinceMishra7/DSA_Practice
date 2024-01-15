class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;

        map<int,int> winners;
        map<int,int> loosers;
        for(auto it:matches){
                winners[it[0]]++;
                loosers[it[1]]++;
        }
        vector<int> win;
        vector<int> loose;
        for(auto it:winners){
            if(loosers.find(it.first)==loosers.end()) win.push_back(it.first);
        }

        for(auto it:loosers){
            if(it.second==1) loose.push_back(it.first);
        }

        ans.push_back(win);
        ans.push_back(loose);
        return ans;




    }
};