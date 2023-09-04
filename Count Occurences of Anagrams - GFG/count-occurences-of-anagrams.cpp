//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
	int search(string pat, string txt) {
	    // code here

	    int j=0,i=0;
	    int n=txt.size();
	    int k=pat.size();
	    if(k>n)return 0;
	    int ans=0;
	    vector<int>hash(26,0);
	    vector<int>phash(26,0);
	    while(j<k)
	    {
	        hash[pat[j]-'a']++;
	        phash[txt[j++]-'a']++;
	        
	    }
	    j--;
	    while(j<n)
	    {
	        if(phash==hash)ans++;
	        j++;
	        if(j!=n)
	        {
	            phash[txt[j]-'a']++;
	        }
	        phash[txt[i]-'a']--;
	        i++;
	        
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends