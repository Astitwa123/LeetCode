class RandomizedSet {
public:
    map<int,int>mp;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val))
        {
            return false;
        }
        
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
  
    }
    
    bool remove(int val) {
        if(mp.count(val))
        {
            int idx=mp[val];
            int last=v.back();
            v[idx]=last;
            v.pop_back();
            mp[last]=idx;
            mp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int random=rand()%v.size();
        return v[random];
    }
};
