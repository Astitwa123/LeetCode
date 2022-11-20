class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=-999;
        int mult=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                mult=(nums[i]-1)*(nums[j]-1);
                if(max<mult)
                {
                    max=mult;
                }
            }
        }
        return max;
    }
};