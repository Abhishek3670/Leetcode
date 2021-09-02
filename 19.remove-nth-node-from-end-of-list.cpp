/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *curr = head;
        int len = 0;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        if (len == 1)
            return NULL;
        int pos = len - n;
        if (pos == 0)
            return head = head->next;
        curr = head;
        ListNode *prev = NULL;
        ListNode *com = curr->next;
        while (pos != 0)
        {
            prev = curr;
            curr = curr->next;
            com = com->next;
            // cout << prev->val << " " << curr->val << " " << com->val << endl;
            pos--;
        }
        
        curr->next = NULL;
        prev->next = com;

        curr = head;
        while (curr != NULL)
        {
            cout << curr->val;
            curr = curr->next;
        }
        return head;
    }
};
// @lc code=end
