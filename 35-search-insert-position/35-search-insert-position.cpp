class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])return i;
            if(i==0 && target<nums[i])return 0;
            if(i==n-1 && target>nums[n-1])
            {
                return n;
            }
            if(target>nums[i] && target<nums[i+1])
            {
                return i+1;
            }
         
        }
        return 1;
    }
};