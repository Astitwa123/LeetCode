class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(nums.size(),0);
        int i,j=0,mid=n;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v[i]=nums[j++];
            }
            else
            {
                v[i]=nums[mid++];
            }
        }
        return v;
    }
};