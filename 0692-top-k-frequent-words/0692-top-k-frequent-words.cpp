class Solution{
    public:
    bool static comp(pair<int,string>&a,pair<int,string>&b)
    {
        if(a.first!=b.first)return a.first>b.first;
        return a.second<b.second;
    }
    vector<string>topKFrequent(vector<string>&words,int k)
    {
        int i=0;
        vector<string>ans;
        unordered_map<string,int>m;
        vector<pair<int,string>>a;
        for(string &it:words)
        {
            m[it]++;
        }
        for(auto kp:m)
        {
            a.push_back(pair<int,string>{kp.second,kp.first});
        }
        sort(a.begin(),a.end(),comp);
        while(k--){
            ans.push_back(a[i].second);
            i++;
        }
        
            return ans;
    }
};


