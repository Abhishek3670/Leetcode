/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int j = -1;
        for(int x:nums){
            if(x != val) nums[++j] = x;
        }
        return ++j;    
    }
};
// @lc code=end
