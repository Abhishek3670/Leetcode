/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (nums1[i] > nums2[j])
                    swap(nums1[i], nums2[j]);
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                if (nums2[i] > nums2[j])
                    swap(nums2[i], nums2[j]);
        for (int i = 0; i < n; i++){
            
            nums1[m+i] = nums2[i];
        }
           
        // for (auto i : nums1)
        //     cout << i << " ";
    }
};
// @lc code=end
