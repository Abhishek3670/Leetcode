/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    int p = 0;
    TreeNode *solve(vector<int> &pre, vector<int> &in, int start, int end)
    {
        if (start > end)
            return NULL;
        int pos;
        TreeNode *node = new TreeNode(pre[p++]);
        for (int i = start; i < end; ++i)
            if (in[i] == node->val)
            {
                pos = i;
                break;
            }
        node->left = solve(pre, in, start, pos - 1);
        node->right = solve(pre, in, pos + 1, end);
        return node;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return solve(preorder, inorder, 0, inorder.size() - 1);
    }
};
// @lc code=end
