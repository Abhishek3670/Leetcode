/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode *root)
    {
        if (root == NULL)
            return {};
        TreeNode *curr = NULL;
        queue<TreeNode *> q;
        vector<int> ans;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 1; i <= n; i++)
            {
                curr = q.front();
                q.pop();
                if (i == 1)
                    ans.push_back(curr->val);

                if (curr->right != NULL)
                    q.push(curr->right);
                if (curr->left != NULL)
                    q.push(curr->left);
            }
        }
        return ans;
    }
};
// @lc code=end
