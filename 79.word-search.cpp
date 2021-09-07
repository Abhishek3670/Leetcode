/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution
{
public:
    bool t[1001][1001];
    bool solve(vector<vector<char>> &M, int m, int n, string &s, int i, int j, int l)
    {
        if (i > m || j > n || i < 0 || j < 0)
            return false;
        if (l < s.size())
            return false;
        if (M[i][j] == s[l])
            return t[i][j] = true && (solve(M, m, n, s, i, j + 1, l + 1) || solve(M, m, n, s, i + 1, j, l + 1) || solve(M, m, n, s, i, j - 1, l + 1));
        else
            return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        memset(t, 0, sizeof(t));
        bool ans = solve(board, board.size(), board[0].size(), word, 0, 0, 0);
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
                cout << t[i][j];
            cout << endl;
        }
        return true;
    }
};
// @lc code=end
