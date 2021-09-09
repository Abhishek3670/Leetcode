/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int n = s.size();
        set<string> set;
        for (auto i : wordDict)
            set.insert(i);
        vector<bool> dp(n + 1);
        dp[n] = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            string sub;
            for (int j = i; j < n; j++)
                if (dp[i] = set.count(sub += s[j]) && dp[j + 1])
                    break;
        }
        return dp[0];
    }
};
// @lc code=end
