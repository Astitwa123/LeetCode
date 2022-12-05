class Solution {
public:
    int recursive(int n,vector<int>&dp)
    {
        if(n<=1)return 1;
        int ans=0;
        if(dp[n]!=-1)return dp[n];
        for(int i=1;i<=n;i++)
        {
            ans+=recursive(i-1,dp)*recursive(n-i,dp);
        }
        return dp[n]=ans;
    }
    int numTrees(int n) {
        vector<int>dp(n+1,-1);
        return recursive(n,dp);
    }
};
