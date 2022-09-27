class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        if(n==2)return "11";
        string s="11";
        int count=1;
        
        for(int j=3;j<=n;j++)
        {
            int count=1;
            string t="";
            s=s+'&';
            for(int i=1;i<s.length();i++)
            {
                if(s[i]!=s[i-1])
                {
                    t=t+to_string(count);
                    t=t+s[i-1];
                    count=1;
                    
                }
                else
                    count++;
            }
            s=t;
        }
        return s;
    }
};