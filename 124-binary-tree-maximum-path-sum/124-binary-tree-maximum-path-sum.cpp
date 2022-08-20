/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dia=INT_MIN;
    int maxDepth(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh=max(0,maxDepth(root->left));
        int rh=max(0,maxDepth(root->right));
        dia=max(dia,lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        maxDepth(root);
        return dia;
    }
};