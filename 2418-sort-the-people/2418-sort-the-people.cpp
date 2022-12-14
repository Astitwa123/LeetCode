class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>vp;
        for(int i=0;i<heights.size();i++)
        {
            vp.push_back({heights[i],names[i]});
        }
        vector<string>ans;
        sort(vp.rbegin(),vp.rend());
        for(int i=0;i<heights.size();i++)
        {
            ans.push_back(vp[i].second);
        }
      return ans;
        
    }
};