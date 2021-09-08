/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */

// @lc code=start
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
class Solution
{
public:
    vector<vector<int>> v;
    void solve(TreeNode *root, int level)
    {
        if (root == NULL)
            return;
        if (level == v.size())
            v.push_back(vector<int>());
        v[level].push_back(root->val);
        solve(root->left, level + 1);
        solve(root->right, level + 1);
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        solve(root, 0);
        return v;
    }
};
// @lc code=end
