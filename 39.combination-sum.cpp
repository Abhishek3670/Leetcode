/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution
{
public:
    int knapsack(vector<int> &array, int target, int n)
    {
        int t[n + 1][target + 1];
        memset(t, 0, sizeof(t));
        for (int i = 1; i < n + 1; i++)
            for (int j = 1; j < target + 1; j++)
                if (array[i] <= j)
                    t[i][j] = max(t[i][j - array[i]], t[i][j - 1]);
                else
                    t[i][j] = t[i][j - 1];
        return t[n][target];
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
       
        cout << knapsack(candidates, target, candidates.size() - 1);
        return {};
    }
};
// @lc code=end
