/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int peak = -1;
        if (nums.size() <= 1)
            cout << nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
            if (nums[i - 1] < nums[i])
                peak = i;
        if (peak == -1)
        {
            sort(nums.begin(), nums.end());
            return;
        }
        int index = peak;
        for (int i = peak; i < n; i++)
            if (nums[i] > nums[peak - 1] && nums[i] < nums[index])
                index = i;
        swap(nums[peak - 1], nums[index]);
        sort(nums.begin() + peak, nums.end());
    }
};
// @lc code=end
