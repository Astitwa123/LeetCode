
class Solution {
public:
    int first(vector<int>& nums , int target)
    {
        int s=0;
        int ans=-1;
        int e=nums.size()-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
                
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
        
    }
       int last(vector<int>& nums , int target)
    {
        int s=0;
        int ans=-1;
        int e=nums.size()-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
                
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int x=first(nums,target);
        if(x==-1)return v;
        
        int y=last(nums,target);
        if(y==-1)return v;
        v[0]=x;
        v[1]=y;
        return v;
    }
};