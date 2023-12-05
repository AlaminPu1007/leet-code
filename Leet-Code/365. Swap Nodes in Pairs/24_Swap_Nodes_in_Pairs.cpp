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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode *prv = dummyNode, *cur = head;

        while (cur && cur->next)
        {
            // copy of third node from given list
            ListNode *nextPrt = cur->next->next, *second = cur->next;

            // swap pairs of node
            second->next = cur;
            cur->next = nextPrt;

            prv->next = second;
            prv = cur;
            cur = nextPrt;
        }

        return dummyNode->next;
    }

    void printListOfNode(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
    }

    void insertIntoNode(int v, ListNode *&head)
    {
        ListNode *temp = new ListNode(0);
        temp->val = v;
        temp->next = NULL;

        if (head == NULL)
        {
            // put node into head
            head = temp;
        }
        else
        {
            ListNode *copyNode = head;
            while (copyNode->next != NULL)
            {
                copyNode = copyNode->next;
            }
            copyNode->next = temp;
        }
    }
};

int main(void)
{
    Solution obj;
    ListNode *head = NULL;

    obj.insertIntoNode(10, head);
    obj.insertIntoNode(20, head);
    obj.insertIntoNode(30, head);
    obj.insertIntoNode(40, head);
    obj.insertIntoNode(50, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *res = obj.swapPairs(head);

    obj.printListOfNode(res);
    cout << endl
         << endl;

    return 0;
}