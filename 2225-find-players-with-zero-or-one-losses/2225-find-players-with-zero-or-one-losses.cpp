class Solution {
public:
    static vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_set<int>win;
        unordered_map<int,int>loss;
        vector<vector<int>>ans(2);
        
        for(const vector<int>&match: matches)
        {
            win.insert(match[0]);
            ++loss[match[1]];
        }
        for(int t:win)
        {
            if(loss.find(t)==loss.end())ans[0].push_back(t);
            
        }
        for(auto[t,l]:loss)
        {
            if(l==1)ans[1].push_back(t);
        }
        sort(begin(ans[0]),end(ans[0]));
        sort(begin(ans[1]),end(ans[1]));
        return ans;
    }
};
 