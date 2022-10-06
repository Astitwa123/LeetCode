class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size(), ans = 0, last = 0;
        
        for(int i=1;i<n;i++){
            if(colors[i]==colors[last]){
                if(neededTime[i]>=neededTime[last]){
                    ans+=neededTime[last],last = i;
                }
                else ans+=neededTime[i];
            }
            else last = i;
        }
        
        return ans;
    }
};