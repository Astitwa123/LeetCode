#include<string.h>
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int length,low,high;
        int maxlen=1;
        for(int i=0;i<n;i++)
        {
            int low=i-1;
            int high=i+1;
            while(high<n && s[high]==s[i])
            {
                high++;
            }
            while(low>=0 && s[low]==s[i])
            {
                low--;
            }
            while(low>=0 && high<n && s[high]==s[low])
            {
                high++;
                low--;
            }
            int length=high-low-1;
            if(maxlen<length)
            {
                maxlen=length;
                start= low+1;
            }
        }
         return s.substr(start,maxlen);
       
    }
    
};