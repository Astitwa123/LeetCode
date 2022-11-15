class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>runningSum;
        
        int x=nums[0];
        runningSum.push_back(x);
        for(int i=1;i<nums.size();i++)
        {
            runningSum.push_back(runningSum.back()+nums[i]);
        }
        return runningSum;
    }
};