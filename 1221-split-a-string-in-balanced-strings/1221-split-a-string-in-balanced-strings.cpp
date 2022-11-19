class Solution {
public:
    int balancedStringSplit(string s) {
      map<char,int>mp;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if(mp['L']==mp['R'])
            {
                mp.clear();
                count++;
            }
        }
        return count;
    }
};

