class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int x=0,y=0,z=0,t=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                x++;
            }
            if(moves[i]=='D')
            {
                y++;
            }
            if(moves[i]=='L')
            {
                z++;
            }
            if(moves[i]=='R')
            {
                t++;
            }
        }
if(x==y && z==t)
{
    return true;
}
            return false;
        }
        
    
};