//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int u,vector<vector<int>>&adj,vector<bool>&grid)
    {
        grid[u]=1;
        for(int v=0;v<adj[u].size();v++)
        {
            if(!grid[v] && adj[u][v]==1)
            {
                dfs(v,adj,grid);
            }
        }

    }
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<bool>grid(V,0);
        int c=0;
        for(int i=0;i<V;i++)
        {
            if(!grid[i])
            {
                c++;
                dfs(i,adj,grid);
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends