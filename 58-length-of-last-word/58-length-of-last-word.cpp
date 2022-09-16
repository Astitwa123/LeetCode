class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
     
        for(int i=(s.size()-1);i>=0;i--)
        {
            
            if(s[i]==32)
            {
                if(count>0)
                {
                    break;
                }
              
                continue;
            }
            else
            {
                count++;
            }
            
            
        }
        return count;
    }
};