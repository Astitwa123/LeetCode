class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,hi=n-1,mid;
        while(hi-low>1)
        {
            mid=(low+hi)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1])
                low=mid+1;
            else
                hi=mid;
        }
        if((low-1)>=0 && nums[low]>nums[hi] && nums[low]>nums[low-1])
            return low;
        else if((low-1)<0 && nums[low]>nums[hi])
                return low;
        else if((hi+1)<=n-1 && nums[hi]>nums[low] && nums[hi]>nums[hi+1])
            return hi;
        else
            return hi;
    }
};