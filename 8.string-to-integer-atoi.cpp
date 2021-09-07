/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    bool isDigit(char ch)
    {
        return ch >= '0' && ch <= '9';
    }
 
    int myAtoi(string s)
    {
        const int len = s.size();
        if (len == 0)
            return 0;
        int index = 0;
        while (index < len && s[index] == ' ')
            ++index;
        bool isNegative = false;

        if (index < len)
        {
            if (s[index] == '-')
            {
                isNegative = true;
                ++index;
            }
            else if (s[index] == '+')
                ++index;
        }

        int result = 0;

        while (index < len && isDigit(s[index]))
        {
            int digit = s[index] - '0';
            // imp
            if (result > (INT_MAX - digit) / 10)
                return isNegative ? INT_MIN : INT_MAX;
            result = (result * 10) + digit;
            ++index;
        }
        return isNegative ? -result : result;
    }
};
// @lc code=end
