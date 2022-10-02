class Solution {
public:
   void printdigits(string digits,string st[],int index,string output,vector<string>&ans)
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string value=st[number];
        
        
        for(int i=0;i<value.length();i++)
        {   output.push_back(value[i]);
            printdigits(digits,st,index+1,output,ans);
            output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)return ans;
        string st[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        string output="";
        
        
        printdigits(digits,st,index,output,ans);
        return ans;
    }

};