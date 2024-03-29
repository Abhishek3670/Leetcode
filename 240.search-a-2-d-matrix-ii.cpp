/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = row - 1;
        int j = 0;
        while (i >= 0 && j < col)
        {
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] > target)
                i--;
            else
                j++;
        }
        return false;
    }
};
// @lc code=end
