/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {
            if (ans.back()[1] >= intervals[i][0])
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            else
                ans.push_back(intervals[i]);
        }
        return ans;
    }
};
// @lc code=end
