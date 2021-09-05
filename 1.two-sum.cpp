/*
 * @lc app=leetcode id=1 lang=cpp
 * 
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                v.push_back(i);
                v.push_back(map[target - nums[i]]);
                return v;
            }
            map[nums[i]] = i;
        }
        return v;
    }
};
// @lc code=end
