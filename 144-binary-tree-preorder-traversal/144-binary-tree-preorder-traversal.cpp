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
// recursive
class Solution {
public:
    vector<int> vec;
    void preorder(TreeNode* node){
        if(node==NULL)
            return;
        vec.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return vec;
    }
};