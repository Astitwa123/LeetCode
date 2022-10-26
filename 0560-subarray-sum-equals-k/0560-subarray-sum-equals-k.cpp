class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
        int count=0,ans=0;
        m[count]=1;
        for(auto it:nums)
        {
            count+=it;
            int r=count-k;
            if(m.find(r)!=m.end())
            {
                ans+=m[r];
            }
            m[count]++;
        }
        return ans;
    }
};