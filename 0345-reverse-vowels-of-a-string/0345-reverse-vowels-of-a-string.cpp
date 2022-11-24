class Solution {
    bool isVowel(char ch)
    {
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        else 
            return false;
    }
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        int mid=(s.size())/2;
        while(i<j)
        {
            bool a=isVowel(s[i]);
            bool b=isVowel(s[j]);
            if(a && b)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!a)
            {
                i++;
            }
            else if(!b)
            {
                j--;
            }
        }
        return s;
    }
};