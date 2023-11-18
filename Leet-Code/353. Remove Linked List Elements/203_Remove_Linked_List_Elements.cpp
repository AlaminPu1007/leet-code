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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *dummyNode = new ListNode(0);
        dummyNode->next = head;

        ListNode *prv = dummyNode, *cur = head;

        while (cur != NULL)
        {
            ListNode *copyNode = cur->next;

            if (cur->val == val)
            {
                prv->next = copyNode;
            }
            else
            {
                prv = prv->next;
            }
            cur = copyNode;
        }

        return dummyNode->next;
    }

    // Print list of node
    void printListOfNode(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl
             << endl;
    }
};

int main(void)
{
    Solution obj;
    ListNode *head = new ListNode(1);

    ListNode *item1 = new ListNode(2);
    head->next = item1;

    ListNode *item2 = new ListNode(3);
    item1->next = item2;

    ListNode *item3 = new ListNode(4);
    item2->next = item3;

    ListNode *item4 = new ListNode(5);
    item3->next = item4;

    // obj.printListOfNode(head);

    ListNode *res = obj.removeElements(head, 3);

    obj.printListOfNode(res);

    return 0;
}