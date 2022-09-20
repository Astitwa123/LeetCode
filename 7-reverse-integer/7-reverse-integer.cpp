class Solution {
public:
    int reverse(int x) {
       long int r=0,sum=0;
        if(x<=-2147483648 || x>=2147483647)
            return 0;
       if(x>0){
        while(x!=0)
        {
            r=x%10;
            sum=sum*10+r;
               if(sum<=-2147483648 || sum>=2147483647)
            return 0;
            x=x/10;
        }
       }
        else
        {
            x=( -1 *x);
        while(x!=0)
        {
            r=x%10;
            sum=sum*10+r;
               if(sum<=-2147483648 || sum>=2147483647)
            return 0;
            x=x/10;
        }
            sum= -1 *sum;
        }
      return int(sum);
    }
};