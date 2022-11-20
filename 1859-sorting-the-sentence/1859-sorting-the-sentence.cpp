class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
         string tmp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')continue;
           
            if(s[i]>='1' && s[i]<='9')
            {
                mp[s[i]]=tmp;
                tmp.clear();
            }
            if(s[i]>='1' && s[i]<='9')
            {
                continue;
            }
            else{
                tmp+=s[i];
            }
            
        }
        string ans="";
        for(auto it:mp)
        {
            ans+=it.second;
            ans+=' ';
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};

