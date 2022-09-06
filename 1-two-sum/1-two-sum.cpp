class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            int y=target-x;
            if(mpp.find(y)!=mpp.end())
            {
                return {i,mpp[y]};
            }
            mpp[nums[i]]=i;
        }
        
        return {-1,-1};
    }
};