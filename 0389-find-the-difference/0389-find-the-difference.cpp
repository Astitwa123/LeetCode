class Solution {
public:
    char findTheDifference(string s, string t) {
        int ns=s.size(),nt=t.size();
        if(ns==0)return t[0];
        unordered_map<char,int>mp;
        for(auto &c:s)
        {
            mp[c]++;
        }
        for(auto &c:t)
        {
            if(--mp[c]<0)return c;
        }
        return 0;
    }
};