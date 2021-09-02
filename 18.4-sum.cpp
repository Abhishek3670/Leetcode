/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        int k = 0;
        sort(nums.begin(), nums.end());
        if (n < 4)
            return {};
        for (int i = 0; i < n-3; i++)
        {
            for (int j = i + 1; j <n-2; j++)
            {
                
                int l = j + 1;
                int r = n - 1;
                cout<<l<<" "<<r<<endl;
                while (l < r)
                {
                    int currSum = nums[i] + nums[j] + nums[l] + nums[r];
                    if (currSum < target)
                        l++;
                    else if (currSum > target)
                        r--;
                    else
                    {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while (l < r && ans[k][2] == nums[l])
                            l++;
                        while (l < r && ans[k][3] == nums[r])
                            r--;
                        k++;
                    }
                    for (int a = 0; i < ans.size(); a++)
                    {
                        for (int b = 0; b < ans[0].size(); b++)
                            cout << ans[a][b] << " ";
                        cout << endl;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
