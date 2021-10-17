/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution
{
public:
    int binarySearch(vector<int> arr, int l, int h, int k)
    {
        if (k > arr[h])
            return h + 1;
        while (l < h)
        {
            int mid = (l + h) / 2;
            if (arr[mid] == k)
                return mid;
            else if (arr[mid] > k)
                h = mid;
            else
                l = mid + 1;
        }
        return h;
    }
    int lengthOfLIS(vector<int> &nums)
    {
        int lastIndex = 0;
        vector<int> res(nums.size());
        res[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int index = binarySearch(res, 0, lastIndex, nums[i]);
            res[index] = nums[i];
            lastIndex = max(lastIndex, index);
        }
        return lastIndex + 1;
    }
};
// @lc code=end
