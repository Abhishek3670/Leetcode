/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode *reverseList(ListNode *list)
    {
        ListNode *curr = list;
        ListNode *prev = NULL;
        ListNode *n;
        while (curr != NULL)
        {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        ListNode *curr1 = l1;
        ListNode *curr2 = l2;
        ListNode *prev = NULL;
        ListNode *l3 = NULL;
        ListNode *n;
        int sum;
        int carry = 0;
        while (curr1 != NULL)
        {
            sum = curr1->val + curr2->val + carry;
            if (sum >= 10)
            {
                carry = sum / 10;
                sum %= 10;
            }
            else
                carry = 0;
            cout << sum << endl;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        // cout<<l3->val;
        return l3;
    }
};
// @lc code=end
