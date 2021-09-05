/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int lastindex = nums.size() - 1;
        // iterate backward 
        for (int i = nums.size() - 1; i >= 0; i--)
            if (nums[i] + i >= lastindex)
            {
                lastindex = i;
            }
        return lastindex == 0; // it reaches to start position
    }
};
// @lc code=end
