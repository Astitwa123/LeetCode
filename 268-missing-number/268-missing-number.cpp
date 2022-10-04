class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         if(nums[0]!=0)return 0;
        if(nums.size()==1)
        {
            if(nums[0]==0)return 1;
           
            if(nums[0]>0)return nums[0]-1;
        }
        int n=nums.size()-1,flag;
        
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            flag=1;
            if(nums[i+1]!=nums[i]+1)
            {
            
                return nums[i]+1;
            }
            
        }
        if(flag==1)
        {
            ans=nums[n]+1;
        }
        return ans;
    }
};