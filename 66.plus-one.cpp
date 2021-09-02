/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> v;
        int n = digits.size();
        int last = digits[n - 1];

        for (auto &i : digits)
        {
            if (i == last)
                v.push_back(i + 1);
            else v.push_back(i);
        }
        return v;
    }
};
// @lc code=end
