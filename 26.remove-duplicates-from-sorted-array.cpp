/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int n = A.size();
        
        if(n < 2) return n;
        int id = 1;
        for(int i = 1; i < n; ++i) 
            if(A[i] != A[i-1]) 
                A[id++] = A[i];
        return id;
    }
};
// @lc code=end

