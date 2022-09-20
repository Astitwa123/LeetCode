class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int a,s,e,t,n;
        n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
             a=nums[i];
             s=i+1;
             e=nums.size()-1;
            t=-a;
             while(s<e)
             {
                 if(nums[s]+nums[e]==t)
                 {
                     ans.push_back({nums[i],nums[s],nums[e]});
                      while(s<e && nums[s]==nums[s+1])s++;
                      while(s<e && nums[e]==nums[e-1])e--;
                     s++;
                     e--;
                 }
                 else if(nums[s]+nums[e]>t)
                 {
                     e--;
                 }
                 else
                     s++;
             }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
        }
};