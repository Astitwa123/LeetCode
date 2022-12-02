class Solution {
public:
    int isVowel(char i)
    {
        char a=tolower(i);
        if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u')
        {
            return 1;
        }
        return 0;
    }
    bool halvesAreAlike(string s) {
        int size=s.length();
        int first=size/2,count1=0,count2=0;
        for(int i=0;i<first;i++)
        {
            count1+=isVowel(s[i]);
        }
        for(int i=first;i<size;i++)
        {
            count2+=isVowel(s[i]);
        }

        if(count1==count2)return true;
        else 
            return false;
    }
};