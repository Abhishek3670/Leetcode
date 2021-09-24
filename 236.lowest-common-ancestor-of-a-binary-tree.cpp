/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode *root , TreeNode *p , TreeNode *q)
    {
        if(root == NULL || root == p || root == q)
            return root;
        TreeNode *parent_1 = dfs(root->left , p , q );
        TreeNode *parent_2 = dfs(root->right , p , q );
        if(parent_1 && parent_2)
            return root;
        else return parent_1 ? parent_1 : parent_2;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root , p ,q);
    }
};
// @lc code=end

