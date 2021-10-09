/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution
{
public:
    int numSquares(int n)
    {
        if (n <= 0)
            return 0;
        vector<int> t(n+1, INT_MAX );
        t[0] = 0;
        for (int i = 1; i <= n ; i++)
            for (int j = 1; j * j <= i; j++)
            {
                t[i] = min(t[i], t[i - j * j]+ 1) ;
            }
        return t.back();
    }
};
// @lc code=end
