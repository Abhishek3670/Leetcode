/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution
{
public:
    int t[1001][1001];
    int solve(int m, int n)
    {
        if (m < 0 || n < 0)
            return 0;
        else if (m == 0 || n == 0)
            return 1;
        else if (t[m][n] > 0)
            return t[m][n];
        else
            return t[m][n] = solve(m - 1, n) + solve(m, n - 1);
    }
    int uniquePaths(int m, int n)
    {
        memset(t, 0, sizeof(t));
        return solve(m - 1, n - 1);
    }
};
// @lc code=end
