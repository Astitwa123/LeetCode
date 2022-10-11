class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for( int i = 0; i<nums.size(); i++ ){
            while( nums[i] > 0 && nums[i] < nums.size() && nums[i] != i+1 ){
                if( nums[i] != nums[nums[i] - 1] )
                    swap(nums[i],nums[nums[i]-1]);
                else break;
            }
        }
        for( int i = 0; i< nums.size(); i++ ){
            if( nums[i] != i+1 ){
                return i+1;
            }
        }
        return nums.size()+1;
    
        
    }
};