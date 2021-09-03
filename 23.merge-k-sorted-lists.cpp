/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergedList(ListNode *l1, ListNode *l2)
    {
        ListNode *curr = l1;
        ListNode *prev = NULL;
        while (curr != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = l2;
        return l1;
    }
    ListNode *sortedList(vector<ListNode *> &lists)
    {
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *newList;
        vector<ListNode*> v;
        for (int i = 1; i < lists.size(); i++)
        {
            newList = mergedList(lists[i - 1], lists[i]);
            v.push_back(newList);s
            sortedList(newList);
        }
    }
};
// @lc code=end
