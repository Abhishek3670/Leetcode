/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    
    int search(vector<int> &A, int target)
    {

        int l = 0;
        int r = A.size() - 1;
        while (l <= r)
        {
            int p = l + (r - l) / 2;
            if (A[p] == target)
                return p;

            // Search left
            if ((A[0] <= target && target < A[p]) || (target < A[p] && A[p] < A[0]) || (A[p] < A[0] && A[0] <= target))
                r = p - 1;
            // Search right
            else
                l = p + 1;
        }

        return -1;
    }
};
// @lc code=end
