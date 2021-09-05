/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> mapp;
        for(int i = 0 ; i < m ; i++)
            mapp[t[i]] = -1;
        int l = 0 , r = 0;
        while()
        {
            if(!(mapp.find(s[l]) != mapp.end()))
            {
                l++;
                r++;
            }
            else if(s[r] == mapp.)
        }

    }
};
// @lc code=end

