class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i,n=s.size();
        
        string arr(n,'c');
        for(i=0;i<n;i++)
        {
            arr[indices[i]]=s[i];
        }
    return arr;
    }
    
};