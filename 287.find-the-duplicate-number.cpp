/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        if (nums.size() > 1)
        {
            int n = nums.size();
            int turtle = nums[0], rabbit = nums[nums[0]];
            while (rabbit != turtle)
            {
                turtle = nums[turtle];
                rabbit = nums[nums[rabbit]];
            }
            rabbit = 0;
            while (rabbit != turtle)
            {
                turtle = nums[turtle];
                rabbit = nums[rabbit];
            }
            return turtle;
        }
        return -1;
    }
};
// @lc code=end
