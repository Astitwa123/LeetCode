class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1||n==2)return 1;
        int prv0=0,prv1=1,prv2=1,ans;
        for(int i=2;i<n;i++)
        {
            ans=prv0+prv1+prv2;
            prv0=prv1;
            prv1=prv2;
            prv2=ans;
            
        }
        return ans;
    }
};