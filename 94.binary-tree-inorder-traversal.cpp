/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        TreeNode *cur = root;
        stack<TreeNode*> s;
        while(cur != NULL || !s.empty())
        {
            while(cur!=NULL)
            {
                s.push(cur);
                cur = cur->left;
            }
            cur = s.top();
            v.push_back(cur->val);
            s.pop();
            cur = cur->right;
        }
        return v;
    }
};
// @lc code=end

