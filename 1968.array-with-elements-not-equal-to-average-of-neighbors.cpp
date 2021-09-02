/*
 * @lc app=leetcode id=1968 lang=cpp
 *
 * [1968] Array With Elements Not Equal to Average of Neighbors
 */

// @lc code=start
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int i = 1;
        if (n < 3)
            return {};
        while (i < n - 2)
        {
            int avg = (nums[i - 1] + nums[i + 1]) / 2;

            if (avg == nums[i])
            {
                swap(nums[i], nums[i + 1]);
            }
            i++;
        }
        i = n-2;
        while (i > 0)
        {
            int avg = (nums[i - 1] + nums[i + 1]) / 2;

            if (avg == nums[i])
            {
                swap(nums[i], nums[i - 1]);
            }
            i--;
        }

        return nums;
    }
};
// @lc code=end
