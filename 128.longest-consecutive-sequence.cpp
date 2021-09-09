/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &arr)
    {
        if(arr.size() == 0)
            return 0;
        int ans = 0, count = 0;
        int n = arr.size();
        // sort the array
        sort(arr.begin(), arr.end());

        vector<int> v;
        v.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                v.push_back(arr[i]);
        }

        for (int i = 0; i < v.size(); i++)
        {

            if (i > 0 && v[i] == v[i - 1] + 1)
                count++;

            else
                count = 1;

            ans = max(ans, count);
        }
        return ans;
    }
};
// @lc code=end
