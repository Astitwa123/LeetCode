/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;
        sum=sum-root->val;
        if(sum==0 && !root->left && !root->right)return true;
        return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);
    }
};
