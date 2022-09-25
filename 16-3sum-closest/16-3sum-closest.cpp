class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int a,s,e,ans,M=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            a=nums[i];
            s=i+1;
            e=n-1;
            while(s<e)
            {
                int sum=a+nums[s]+nums[e];
                if(sum==t)
                {
                    return sum;
                    
                }
                else if(sum <t)
                {
                    s++;
                }
                else
                {
                    e--;
                }
                 int d=sum-t;
                if(d<0)
                {
                    d*=-1;
                }
                if(M>d)
                {
                    M=d;
                    ans=sum;
                    
                }
            }
            
            
        }
        return ans;
    }
};