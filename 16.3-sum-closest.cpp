/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int mindiff = INT_MAX;
        int ans = INT_MIN;
        if (nums.size() < 3)
            return 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r)
            {
                int currSum = nums[i] + nums[l] + nums[r];
                if (abs(target - currSum) < mindiff)
                {
                    mindiff = abs(target - currSum);
                    ans = currSum;
                }
                if (currSum > target)
                    r--;
                if (currSum < target)
                    l++;
                else if (currSum == target)
                {
                    ans = currSum;
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
