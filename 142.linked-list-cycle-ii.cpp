/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *curr = head;
        set<ListNode *> s;
        while (!s.count(curr) && curr != NULL)
        {
            s.insert(curr);
            curr = curr->next;
        }
        
        return curr;
    }
};
// @lc code=end
