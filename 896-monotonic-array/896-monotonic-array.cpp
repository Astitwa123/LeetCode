class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0,n=nums.size(),inc=0,dec=0;
        while(i<n-1)
        {
            if(nums[i]<nums[i+1])
            {
                inc=1;
                break;
            }
            else if(nums[i]>nums[i+1])
            {
                dec=1;
                break;
            }
            i++;
        }
        if(inc==1)
        {
            for(int j=i;j<nums.size()-1;j++)
            {
                if(nums[j]>nums[j+1]&& nums[j]!=nums[j+1])
                {
                    return false;
                }
        
            }
            return true;
        }
        else{
            for(int j=i;j<nums.size()-1;j++)
            {
                if(nums[j]<nums[j+1] && nums[j]!=nums[j+1])
                {
                    return false;
                }
         
            }
            return true;
        }
        return true;
    }
};