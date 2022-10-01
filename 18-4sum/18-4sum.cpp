class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        long long tsum,s=0,n=nums.size(),h=n,j=s+1;
        
        for(s=0;s<n-3;s++)
        {   
            if(s>0 && nums[s]==nums[s-1])
            {  
                continue;}
            for(j=s+1;j<n-2;j++)
            {
                if(j>s+1 && nums[j]==nums[j-1])continue;
                tsum=target-(nums[s]+nums[j]);
                long long l=j+1,h=n-1;
                while(l<h)
                {
                    if(nums[l]+nums[h]==tsum)
                    {
                        vector<int>oneans={nums[s],nums[j],nums[l],nums[h]};
                        ans.push_back(oneans);
                        while(l<h && nums[l]==nums[l+1])l++;
                        while(l<h && nums[h]==nums[h-1])h--;
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]>tsum)h--;
                    else if(nums[l]+nums[h]<tsum)l++;
                }
            }
        }
        return ans;
    }
};