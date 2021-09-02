/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        int n = candidates.size();
        int W = target;
        int t[n + 1][W + 1];
        memset(t, 0, sizeof(t));
        for (int i = 1; i < n + 1; i++)
            for (int j = 1; j < W + 1; j++)
                if (candidates[i - 1] <= j)
                    t[i][j] = t[i][j - candidates[i - 1]] + t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
        cout << t[n][W];
        return {};
    }
};
// @lc code=end
