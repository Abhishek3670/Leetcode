/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        int t[n + 1];
        memset(t, 0, sizeof(t));
        t[0] = 0;
        t[1] = 1;
        t[2] = 2;
        for (int i = 3; i < n + 1; i++)
            t[i] = t[i - 1] + t[i - 2];
        for (int i = 0; i < 3; i++)
            cout << t[i] << " ";

        return t[n];
    }
};
// @lc code=end
