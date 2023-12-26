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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummyNode = new ListNode(0);
        dummyNode->next = head;

        ListNode *leftPrv = dummyNode, *cur = head;

        for (int i = 0; i < left - 1; i++)
        {
            leftPrv = cur;
            cur = cur->next;
        }

        ListNode *prv = NULL;

        for (int i = 0; i <= (right - left); i++)
        {
            ListNode *tempNode = cur->next;
            cur->next = prv;
            prv = cur;
            cur = tempNode;
        }

        leftPrv->next->next = cur;
        leftPrv->next = prv;

        return dummyNode->next;
    }

    // Insert into node
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

    // Print list of node
    void printListOfNode(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
    }
};

int main(void)
{
    Solution obj;

    ListNode *head = NULL;

    obj.insertIntoNode(1, head);
    obj.insertIntoNode(2, head);
    obj.insertIntoNode(3, head);
    obj.insertIntoNode(4, head);
    obj.insertIntoNode(5, head);

    // print list of node
    // cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *revList = obj.reverseBetween(head, 2, 4);

    obj.printListOfNode(revList);
    cout << endl
         << endl;

    return 0;
}