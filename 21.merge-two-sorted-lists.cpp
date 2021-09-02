/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *addLists(ListNode *l, ListNode *node)
    {
        ListNode *pos = l;
        ListNode *prev = NULL;
        while (pos != NULL && pos->val <= node->val)
        {
            prev = pos;
            pos = pos->next;
        }
        prev->next = node;
        node->next = pos;
        return l;
    }
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // ListNode *curr1 = l1;
        // ListNode *curr2 = l2;
        // if (curr2 == NULL)
        //     return l1;
        // if (curr1 == NULL)
        //     return l2;
        // while (curr2 != NULL)
        // {
        //     l1 = addLists(l1, curr2);
        //     curr2 = curr2->next;
        // }
        // return l1;
        ListNode *res = NULL;
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val <= l2->val)
        {
            res = l1;
            res->next = mergeTwoLists(l1->next, l2);
        }
        else
        {
            res = l2;
            res->next = mergeTwoLists(l1, l2->next);
        }
        return res;
    }
};
// @lc code=end
