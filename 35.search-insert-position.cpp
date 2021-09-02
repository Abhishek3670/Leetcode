/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;
        if (l == r && nums[l] == target)
            return 0;

        while (l < r)
        {
            mid = (l + r) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid;
        }
        cout<<l<<r;
        if (nums[l] < target)
            return l + 1;
        else return l ;
    }
};
// @lc code=end
