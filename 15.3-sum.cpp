/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &num)
    {
        vector<vector<int>> res;
        sort(num.begin(), num.end());
        for (int i = 0; i < num.size(); i++)
        {
            int target = -num[i];
            int l = i + 1;
            int r = num.size() - 1;
            while (l < r)
            {
                int sum = num[l] + num[r];
                if (sum < target)
                    l++;
                else if (sum > target)
                    r--;
                else
                {
                    vector<int> triplet = {num[i], num[l], num[r]};
                    res.push_back(triplet);
                    while (l < r && num[l] == triplet[1])
                        l++;
                    while (l < r && num[r] == triplet[2])
                        r--;
                }
            }
            while (i + 1 < num.size() && num[i + 1] == num[i])
                i++;
        }

        return res;
    }
};
// @lc code=end
