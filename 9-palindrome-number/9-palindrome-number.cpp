class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x==0)return true;
        double num,r,sum=0;
        num=x;
        while(x!=0)
        {
            r=x%10;
            sum=sum*10+r;
            x=x/10;
        }
        if(sum==num)
        {
            return true;
        }
        else
            return false;
    }
};
