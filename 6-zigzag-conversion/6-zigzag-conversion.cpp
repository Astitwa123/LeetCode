class Solution {
public:
    string convert(string s, int numRows) {
        int l=s.length();
        if(numRows==1)return s;
        if(numRows>=l)return s;
        int row=0;
        int delta=-1;
        vector<char>res[numRows];
        for(auto c:s)
        {
            res[row].push_back(c);
            if(row==0 || row==numRows-1)
            {
                delta*=-1;
            }
            row+=delta;
        }
        string t="";
        for(auto x:res)
        {
            for(auto y:x)
            {
                t+=y;
            }
        }
        return t;
    }
};