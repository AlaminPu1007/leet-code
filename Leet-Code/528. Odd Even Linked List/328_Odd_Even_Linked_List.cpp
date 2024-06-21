
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;

    ListNode *next;

    ListNode(int _v)
    {
        val = _v;
        next = NULL;
    }
};

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *even = head;
        ListNode *odd = head->next;
        ListNode *odd_start = odd;

        while (even->next && odd->next)
        {
            // update even indices
            even->next = odd->next;

            // update odd indices
            odd->next = even->next->next;

            even = even->next;
            odd = odd->next;
        }

        even->next = odd_start;

        return head;
    }
};

int main(void)
{
    Solution obj;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *res = obj.oddEvenList(head);

    while (res)
    {
        cout << res->val << " ";
        res = res->next;
    }

    return 0;
}