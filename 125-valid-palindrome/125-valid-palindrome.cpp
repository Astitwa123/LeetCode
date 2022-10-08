class Solution {
     char small(char ch)
    {
        char temp;
        if(ch>='a' && ch<='z')
        {
            return ch;
        }
        else{
            temp=ch-'A'+'a';
        }
        return temp;
    }
public:
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        if(s.size()==0|| s.size()==1)return true;
        while(start<=end)
        {
            if(!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if(!isalnum(s[end]))
            {   
                end--;
                continue;
            }
            if(small(s[start++])!=small(s[end--]))
            {
                return false;
            }
        }
        return true;
    }
   
};

