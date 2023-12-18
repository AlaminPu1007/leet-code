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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *cur = head;

        while (cur != NULL)
        {
            // removed duplicate value
            while (cur->next && (cur->next->val == cur->val))
                cur->next = cur->next->next;

            cur = cur->next;
        }

        return head;
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

    obj.insertIntoNode(10, head);
    obj.insertIntoNode(20, head);
    obj.insertIntoNode(30, head);
    obj.insertIntoNode(30, head);
    obj.insertIntoNode(50, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *revList = obj.deleteDuplicates(head);

    // print list of node
    cout << "After reversing the node -> ";
    obj.printListOfNode(revList);
    cout << endl
         << endl;
    return 0;
}