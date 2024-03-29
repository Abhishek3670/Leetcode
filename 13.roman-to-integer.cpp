/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
       
        int num = map[s[s.size()-1]];
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (map[s[i]] >= map[s[i+1]])
                num += map[s[i]];
            else
                num -= map[s[i]];
        }
        return num;
    }
};
// @lc code=end
