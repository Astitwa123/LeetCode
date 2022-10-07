class Solution {
public:
    int mySqrt(int x) {
        long long i,ans;
        if(x==0)return 0;
        if(x==1)return 1;
        if(x==2)return 1;
        for(i=2;i<x;i++)
        {
            ans=i*i;
            if(ans==x)
            {
                return i;
            }
            else if(ans>x)
            {
                return i-1;
            }
        }
        return i;
    }
};