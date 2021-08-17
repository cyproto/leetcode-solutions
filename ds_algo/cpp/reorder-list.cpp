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
    void reorderList(ListNode *head)
    {
        ListNode *tail = NULL;
        tail = helper(head, getLength(head));
    }

    int getLength(ListNode *head)
    {
        int len = 0;
        while (head != NULL)
        {
            ++len;
            head = head->next;
        }
        return len;
    }

    ListNode *helper(ListNode *head, int len)
    {
        if (len == 0)
            return NULL;
        if (len == 1)
            return head;
        if (len == 2)
            return head->next;

        ListNode *tail = helper(head->next, len - 2);
        ListNode *tmp = tail->next;
        tail->next = tail->next->next;
        tmp->next = head->next;
        head->next = tmp;
        return tail;
    }
};