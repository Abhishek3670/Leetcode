/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution
{
public:
    void permutate(vector<int> &num, int begin, vector<vector<int>> &result)
    {
        if (begin >= num.size())
        {
            result.push_back(num);
            return;
        }

        for (int i = begin; i < num.size(); i++)
        {
            swap(num[begin], num[i]);
            permutate(num, begin + 1, result);
            swap(num[begin], num[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        vector<vector<int>> result;
        permutate(nums, 0, result);
        return result;
    }
};
// @lc code=end
