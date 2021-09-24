/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int t = 1;
        vector<int> product;
        for (int i = 0; i < nums.size(); i++)
        {
            t *= nums[i];
            product.push_back(t);
        }
        vector<int> ans;
        t = 1;
        for (int i = nums.size() - 1; i >= 1; i--)
        {
            ans.push_back(t * product[i - 1]);
            t *= nums[i];
        }
        ans.push_back(t);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
// @lc code=end
