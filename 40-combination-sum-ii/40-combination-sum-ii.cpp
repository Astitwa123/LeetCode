class Solution {
        void combinationRecursion(int idx,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&subseq,int target)
        {
            if(target==0)
            {
                ans.push_back(subseq);
                return;
            }
        
            for(int i=idx;i<candidates.size();i++)
            {
                 if(candidates[i]>target)break;
                 if(i>idx && candidates[i]==candidates[i-1])      
                    continue;
                   subseq.push_back(candidates[i]);
                combinationRecursion(i+1,candidates,ans,subseq,target-candidates[i]);
                subseq.pop_back();
            }
        }
    
public:
    vector<vector<int>> combinationSum2(vector<int>&candidates,int target)
  {
        sort(candidates.begin(),candidates.end());
        vector<int>subseq;
        vector<vector<int>>ans;
        combinationRecursion(0,candidates,ans,subseq,target);
        return ans;
      
  }
};

