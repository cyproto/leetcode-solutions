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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode();
        if (l2 == NULL)
        {
            return l1;
        }
        else if (l1 == NULL)
        {
            return l2;
        }
        if (l1->val <= l2->val)
        {
            result->val = l1->val;
            result->next = mergeTwoLists(l1->next, l2);
        }
        else if (l1->val > l2->val)
        {
            result->val = l2->val;
            result->next = mergeTwoLists(l1, l2->next);
        }
        return result;
    }
};