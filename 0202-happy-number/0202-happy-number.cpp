class Solution {
 
public:
    int help(int n)
    {   int ans=0;
        int rem=0;
        while(n)
        {   rem=n%10;
            ans+=(rem*rem);
            n/=10;
        }
     return ans;
    }
    bool isHappy(int n) {
      int fast=n,slow=n;
        do{
            slow=help(slow);
            fast=help(help(fast));
        }while(fast!=slow);
        return slow==1;
    }
    
};