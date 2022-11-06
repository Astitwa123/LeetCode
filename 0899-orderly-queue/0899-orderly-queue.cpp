class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(s.size()==1 && k==1)return s;
        if(k==0)return s;
        if(k>1){ sort(s.begin(),s.end());
            return s;
                };
       if(k==1)
       {
           string st=s;
           for(int i=0;i<s.size();i++)
           {
               string p=s.substr(i+1,s.size())+s.substr(0,i+1);
               if(st>p)
               {
                   st=p;
               }
               
           }
           return st;
       }
       return s;
    }
};