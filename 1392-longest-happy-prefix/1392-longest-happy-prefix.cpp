class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        int i,j;
        vector<int>lps(n,0);
        for(i=1;i<n;i++)
        {
            j=lps[i-1];
            {
                while(j>0 && s[i]!=s[j])
                {
                    j=lps[j-1];
                }
                if(s[i]==s[j])
                {
                    j++;
                }
                lps[i]=j;
            }
        }
        return s.substr(0,lps[n-1]);
    }
};


