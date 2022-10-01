class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)return INT_MAX;
        
        int temp,m;
        long long num=abs(dividend),denm=abs(divisor),ans=0;
        int sign=dividend>0 ^divisor>0? -1:1;
        
        while(num>=denm)
        {
            long long temp=denm,m=1;
            while(temp<<1 <=num)
            {
                temp<<=1;
                m<<=1;
            }
            num-=temp;
            ans+=m;
        }
        if(sign<0){
            ans=-ans;
        }
        return ans;
    }
};