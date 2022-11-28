class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n= arr.size();
        int Mod=1e9+7;
        stack<int>left_st;
        stack<int>right_st;

        right_st.push(n-1);
        vector<int>left(n);
        vector<int>right(n);
        left[0]=1;
        right[n-1]=1;
        
        
        left_st.push(0);
        for(int i=1;i<n;i++)
        {
            while(!left_st.empty() && arr[i]<arr[left_st.top()])
                left_st.pop();
            
            if(left_st.empty())
            {
                left[i]=i+1;
            }
            else{
                left[i]=i-left_st.top();
            }
            left_st.push(i);
        }
        
         for(int i=n-2;i>=0;i--)
        {
            while(!right_st.empty() && arr[i]<=arr[right_st.top()])
                right_st.pop();
            
            if(right_st.empty())
            {
                right[i]=n-i;
            }
            else{
                right[i]=right_st.top()-i;
            }
            right_st.push(i);
        }
        long long int res=0;
        for(int i=0;i<n;i++)
        {
            long long prod=(left[i]*right[i])%Mod;
            long long net=(arr[i]*prod)%Mod;
            res=(res+net)%Mod;
        }
        return res%Mod;
        
    }
};