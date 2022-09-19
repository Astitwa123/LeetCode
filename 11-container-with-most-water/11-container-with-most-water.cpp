class Solution {
public:
    int maxArea(vector<int>& h) {
   
      int s=0,e=h.size()-1;
       int area=0,maxarea=0;
        while(s<e)
        {
            area=min(h[s],h[e])*(e-s);
            if(area>maxarea)maxarea=area;
            if(min(h[s],h[e])==h[s])s++;
            else
                e--;
        }
        return maxarea;
    }
};