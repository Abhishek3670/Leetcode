/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &A, int B)
    {
        deque<pair<int, int>> window;
        vector<int> v;
        for (int i = 0; i < A.size(); i++)
        {
            //piche se ssara chota wala remove karo taki sabse piche sabse bada
            while (!window.empty() && window.back().first <= A[i])
                window.pop_back();
            window.push_back(make_pair(A[i], i));

            //samne se un elements ko hata do jo i pe khatm hone wale window me nahi hai
            while (window.front().second <= i - B)
                window.pop_front();
            if (i >= B - 1)
                v.push_back(window.front().first);
        }
        return v;
        // int i = 0;
        // int j = 0;
        // int n = A.size();
        // vector<int> v;
        // queue<int> q;
        // int maxi = INT_MIN;
        // while (j < n)
        // {
        //     maxi = max(maxi, A[j]);
        //     q.push(A[j]);
        //     if (j - i + 1 < B)
        //         j++;
        //     else if (j - i + 1 == B)
        //     {
        //         while (q.front() != maxi)
        //             q.pop();

        //         v.push_back(maxi);
        //         if (A[i] == maxi)
        //         {
        //             cout<< A[i+1] << " " << A[j] << endl;
        //             q.pop();
        //             if (!q.empty())
        //                 maxi = max(A[i + 1], A[j]);
        //             else
        //                 maxi = INT_MIN;
        //         }
        //         j++;
        //         i++;
        //     }
        // }
        // return v;
    }
};
// @lc code=end
