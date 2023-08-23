//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    bool isValid(int i,int j,int n,int m)
    {
        return i>=0 && i<n && j>=0 && j<m;
    }
    void bfs(vector<vector<int>>&vis,vector<vector<char>>&grid,int r,int c)
    {
        queue<pair<int,int>>q;
        vis[r][c]=1;
        q.push({r,c});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    int newi=a+i;
                    int newj=b+j;
                    if(isValid(newi,newj,n,m) && grid[newi][newj]=='1' && !vis[newi][newj])
                    {
                        q.push({newi,newj});
                        vis[newi][newj]=1;
                    }
                }
            }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    count++;
                    bfs(vis,grid,i,j);
                }
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends