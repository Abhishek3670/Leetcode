/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int t[n + 1][m + 1];
        memset(t, 0, sizeof(t));
        int ans = INT_MIN;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                if (matrix[i - 1][j - 1] == '1')
                    t[i][j] = min(t[i - 1][j], min(t[i - 1][j - 1], t[i][j - 1])) + 1;
                ans = max(ans, t[i][j]);
            }
      
        return ans * ans;
    }
};
// @lc code=end
