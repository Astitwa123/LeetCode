class Solution {
public:
    bool judgeCircle(string moves) {
        int i,s=moves.length();
        int r=0,d=0,l=0,u=0;
        for(i=0;i<s;i++)
        {
            if(moves[i]=='U')u++;
            else if(moves[i]=='L')l++;
            else if(moves[i]=='D')d++;
            else if(moves[i]=='R')r++;
        }
        if(r==l && u==d)
            return true;
        else
            return false;
        
    }
};