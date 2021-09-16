/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       // 1,2,2,3,3,4,5,5,6
       // 1,2,3,4,5,6
       sort(nums.begin(),nums.end());
       return nums[nums.size() - k];
    }
};
// @lc code=end

