/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool isValidBST(TreeNode *root)
    {
        vector<int> v;
        int n = 0;
        TreeNode *curr = root;
        stack<TreeNode *> s;
        while (!s.empty() || curr != NULL)
        {
            while (curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            v.push_back(curr->val);
            n++;
            curr = curr->right;
        }
        for (int i = 1; i < n; i++)
            if (v[i - 1] >= v[i])
                return false;
        return true;
    }
};
// @lc code=end
