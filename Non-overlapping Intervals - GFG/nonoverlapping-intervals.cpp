//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end());
        int ans=0,prev=0;
        for(int curr=1;curr<N;curr++)
        {
            if(intervals[prev][1]>intervals[curr][0])
            {
                ans++;
                if(intervals[prev][1]>=intervals[curr][1])
                {
                    prev=curr;
                }
            }
            else{
                prev=curr;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends