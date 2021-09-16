/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        while(curr || !s.empty())
        {
            while(curr)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            v.push_back(curr->val);
            curr = curr->right;
        }
        return v[k-1];
        
    }
};
// @lc code=end

