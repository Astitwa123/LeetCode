class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,index=nums.size()-1;
      for(i=nums.size()-1;i>=0;i--)
      {
          if(nums[i]+i>=index)
          {
              index=i;
          }
      }
        if(index==0)return true;
        else
            return false;
        
    }
};