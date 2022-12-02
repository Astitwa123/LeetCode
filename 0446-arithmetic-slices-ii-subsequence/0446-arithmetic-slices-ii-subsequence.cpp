class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      
      int n=nums.size();
        int ans=0;
        vector<unordered_map<long long,int>>dp(n);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                long long diff=(long long)nums[i]-nums[j];
                int seq;
                if(dp[j].count(diff))
                {
                    seq=dp[j][diff];
                }
                else
                    seq=0;
                dp[i][diff]+=seq+1;
                ans+=seq;
            }
        }
        return ans;
    }

};
