/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution
{
public:
    int t[1001][1001];
    int solve(vector<vector<int>> &M, int m, int n)
    {
        t[0][0] = M[0][0];
        for (int i = 1; i < n; i++)
            t[0][i] = t[0][i - 1] + M[0][i];
        for (int i = 1; i < m; i++)
            t[i][0] = t[i - 1][0] + M[i][0];
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                t[i][j] = M[i][j] + min(t[i - 1][j], t[i][j - 1]);
        return t[m - 1][n - 1];
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        memset(t, 0, sizeof(t));
        int m = grid.size();
        int n = grid[0].size();
        return solve(grid, m, n);
    }
};
// @lc code=end
