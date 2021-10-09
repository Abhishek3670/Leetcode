/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int l = i + 1;
            int r = i;
            int count = 1;
            while (l < nums.size() && r < nums.size())
            {
                if (nums[r] < nums[l])
                {

                    count++;
                    // cout << count;
                    r = l;
                    l++;
                }
                else
                    l++;
            }
            maxi = max(count, maxi);
        }
        return maxi;
    }
};
// @lc code=end
