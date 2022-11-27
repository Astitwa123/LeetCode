class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int start=0,end=1,diff,i,sum=0,n;
        for(i=1;i<nums.size();i++){
            diff=nums[end]-nums[start];
            while(i+1<nums.size() && (nums[i+1]-nums[i])==diff)
            {
                end++;
                i++;
            }
            n=(end-start)+1;
            sum+=(n-2)*(n+1-2)/2;
            start=end;
            end++;
        }
        return sum;
        
    }
};