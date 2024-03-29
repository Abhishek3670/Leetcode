/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution
{
public:
    void transpose(vector<vector<int>> &M, int n)
    {
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                swap(M[i][j], M[j][i]);
    }
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        transpose(matrix, n);
        for(int i = 0 ; i < n ; i++)
        {
            int l = 0;
            int r = n - 1;
            while(l < r)
            {
                swap(matrix[i][l],matrix[i][r]);
                l++;
                r--;
            }
        }
        
    }
};
// @lc code=end
