/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        long long l = 0, r = x;
        if(x == 1)
            return x;
        while (l < r)
        {
            long long mid = (l + r) / 2;
            if (mid * mid > x)
                r = mid;
            else if (mid * mid <= x)
                l = mid;
            if(r-l == 1)
                break;
        }
        return l;
    }
};
// @lc code=end
