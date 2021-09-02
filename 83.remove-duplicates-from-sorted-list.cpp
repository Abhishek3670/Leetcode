/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *temp = head;
        ListNode *prev = deleteDuplicates(head->next);
        if (prev && prev->val == temp->val)
            return prev;
        else if (prev && prev->val != temp->val)
        {
            temp->next = prev;
            return temp;
        }
        else
            return prev;
    }
};
// @lc code=end
