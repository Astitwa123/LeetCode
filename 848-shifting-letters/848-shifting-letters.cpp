class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int i;
        long long sum=0;
        long long temp=0;
        for(i=s.length()-1;i>=0;i--)
        {
          sum+=shifts[i];
            temp=sum;
            if(temp>=26)
            {
                temp%=26;
            }
            if(temp+s[i]>122)
            {
                s[i]=('a'-1)+((temp+s[i])-122);
            }
            else
            {
                s[i]+=temp;
            }
            
        }
        return s;
    }
};