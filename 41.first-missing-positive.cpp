/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution
{
public:
 
    int firstMissingPositive(vector<int> &nums)
    {
        int i = 1;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (nums[j] >= 0)
            {
                if (nums[j] > i)
                    q.push(nums[j]);
                if (i == nums[j])
                    i++;
            }
        }
     
        while (!q.empty())
        {
            if (q.top() == i)
                i++;
            q.pop();
        }
        return i;
    }
};
// @lc code=end
