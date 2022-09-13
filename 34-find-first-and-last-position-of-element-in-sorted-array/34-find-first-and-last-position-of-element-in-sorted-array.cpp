
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                int first=i;
                v.push_back(first);
                flag=1;
                break;
            }
           
        }
        if(flag==0)
        {
            v.push_back(-1);
        }
        flag=0;
            for(int i=nums.size()-1;i>=0;i--)
        {
            if(target==nums[i])
            {
                int last=i;
                v.push_back(last);
                flag=1;
                break;
            }
           
        }
        if(flag==0)
        {
            v.push_back(-1);
        }
        return v;
    }
};