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
        // int l = 0;
        // int r = nums.size() - 1;
        // vector<int> v;
        // sort(nums.begin(), nums.end());
        // while (l < r)
        // {
        //     int sum = 0;
        //     sum += nums[l] + nums[r];
        //     if (sum == target)
        //     {
        //         v.push_back(l);
        //         v.push_back(r);
        //     }
        //     else if (sum < target)
        //         l++;
        //     else
        //         r--;
        // }
        // return v;
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
