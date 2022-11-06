class Solution {
public:
    static bool cmp(string &a,string &b)
    {
        return a+b>=b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)++x;
        }
       if(x==nums.size())return "0";
        string str1="";
        for(int i=0;i<nums.size();i++)
        {
            str.push_back(to_string(nums[i]));
        }
        sort(str.begin(),str.end(),cmp);
        for(int i=0;i<str.size();i++)
        {
            str1+=str[i];
        }
        return str1;
    }
};