class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //doing by moore's voting algorithm
        int cand=nums[0];
        int count =1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==cand)
            {
                count++;
                
            }
            else if(nums[i]!=cand)
            {
                count--;
                
            }
            if(count==0)
            {
                cand=nums[i];
                count=1;
            }
        }
        return cand;
    }
};