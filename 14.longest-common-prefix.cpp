/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        map<char, int> ans;
        string t = "";
        int maxi = INT_MIN;
        if (strs.size() == 1)
            return strs[0];
        for (int i = 0; i < strs.size() - 1; i++)
        {
            t = strs[i];
            for (int j = 0; j < strs[i + 1].size(); j++)
            {
                string temp = strs[i + 1];
                if (t[j] == temp[j])
                    ans[t[j]]++;
                else
                    break;
            }
        }
        t = "";
        for (auto &i : ans)
            maxi = max(maxi, i.second);
        for (auto &i : ans)
            if (i.second == maxi)
                t += i.first;
        return t;
    }
};
// @lc code=end
