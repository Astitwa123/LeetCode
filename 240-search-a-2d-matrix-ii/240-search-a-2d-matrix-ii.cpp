class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int r=matrix.size(),c=matrix[0].size(),i,j,row=0,col=c-1;
     while(row<r && col<c && col>=0 && row>=0)
     {
         if(target==matrix[row][col])return true;
         else if(target<matrix[row][col])col--;
         else if(target>matrix[row][col])row++;
     }
        return false;
    }
};
