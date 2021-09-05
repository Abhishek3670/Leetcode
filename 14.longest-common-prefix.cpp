/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    // Optimal approach using sort O(nlogn)
    string solve(vector<string> &a)
    {
        int n = a.size();
        if (n == 0)
            return "";
        string ans = "";
        sort(a.begin(), a.end());
        string l = a[0];
        string r = a[n - 1];
        for (int i = 0; i < l.size(); i++)
            if (l[i] == r[i])
                ans += r[i];
            else
                break;
        return ans;
    }
    string commonPrefix(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();
        string com = "";
        for (int i = 0; i < min(n, m); i++)
            if (s1[i] == s2[i])
                com += s1[i];
            else
                return com;
        return com;
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        string commonString = strs[0];
        for (int i = 1; i < n; i++)
            commonString = commonPrefix(commonString, strs[i]);
        return commonString;
    }
};
// @lc code=end
