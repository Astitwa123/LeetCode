/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *  
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        int hl=0,rl=0;
        TreeNode *left=root,*right=root;
        while(left)
        {
            ++hl;
            left=left->left;
        }
         while(right)
        {
            ++rl;
            right=right->right;
        }
        if(rl==hl){
            return (1<<hl)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};

