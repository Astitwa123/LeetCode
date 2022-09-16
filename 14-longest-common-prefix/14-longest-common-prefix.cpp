class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int i,j,count=0,len;
        string str;
         double min=100000;
         for(i=0;i<strs.size();i++){
             len=strs[i].size();
            if(len<min)
            {min=len;
             str=strs[i];
            }
         }
        for(i=0;i<min;i++)
        {
            for(j=0;j<strs.size();j++)
            {
                if(strs[j][count]!=str[count])
                {
                    return str.substr(0,count);
                }
            }
            count++;
        }
        return str.substr(0,count);
    }
};