/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>>  ans = {{}};
        for (int num : nums)
        {
            int n = ans.size();
            for (int i = 0; i < n; i++)
            {
                ans.push_back(ans[i]);
        
                ans.back().push_back(num);
            }
        }
        return ans;
    }
};
// @lc code=end
