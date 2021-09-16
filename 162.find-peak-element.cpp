/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int l = 0, h = nums.size() - 1, mid;

        while (l < h)
        {
            mid = l + (h - l) / 2;
            if (nums[mid] < nums[mid + 1])
                l = mid + 1;
            else
                h = mid;
        }

        return l;
    }
};
// @lc code=end
