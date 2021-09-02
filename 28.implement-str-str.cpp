/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int mini = INT_MAX;
        if(needle.empty() && haystack.empty())
            return -1;
        for (int i = 0; i < haystack.size(); i++)
            if (haystack[i] == needle[i % needle.size()])
                mini = min(mini, i);
            else
                i += needle.size() - 1;
        if (mini == INT_MAX)
            return -1;
        else if (needle.empty() )
            return 0;
        else
            return mini;
    }
};
// @lc code=end
