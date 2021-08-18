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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *c1 = headA;
        ListNode *c2 = headB;
        while (c1 != c2)
        {
            c1 = c1 ? c1->next : headB;
            c2 = c2 ? c2->next : headA;
        }
        return c1;
    }
};