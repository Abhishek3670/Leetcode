/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        bool flag = false;
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--)
            if (s[i] != ' ')
            {
                flag = true;
                count++;
            }
            else if (flag == false)
                continue;
            else
                break;
        return count;
    }
};
// @lc code=end
