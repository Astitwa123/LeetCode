class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,end=0,max=0;
        set<char>Set;
       while(start<s.size())
       {
           auto it=Set.find(s[start]);
           if(it==Set.end())
           {
               if(start-end+1>max)
               {
                   max=start-end+1;
               }
               Set.insert(s[start]);
               start++;
           }
           else
           {
               Set.erase(s[end]);
               end++;
           }
           
       }
       return max;
    }
};