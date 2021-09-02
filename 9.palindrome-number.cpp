/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long sum = 0;
        long long temp = x;
        while (temp != 0)
        {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        //cout << sum;
        if (x != sum || x < 0)
            return false;
        else
            return true;
    }
};
// @lc code=end
