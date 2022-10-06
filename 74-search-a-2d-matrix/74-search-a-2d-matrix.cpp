class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size(),row=0,col=0,i=0;
        while(row<r && col<c)
        {
            if(target>=matrix[row][col] && target <=matrix[row][c-1])
            {
                for(int j=0;j<c;j++)
                {
                    if(target==matrix[row][j])return true;
                }
                return false;
               
            }
            else if(target>matrix[row][col] && target>matrix[row][c-1])
            {
                row++;
            }
            else{
                return false;
            }
        }
        return false;
    }
};