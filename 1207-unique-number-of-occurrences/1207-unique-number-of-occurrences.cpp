class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(ans.count(it.second))
                return false;
            ans.insert(it.second);
        }
        return true;
    }
};