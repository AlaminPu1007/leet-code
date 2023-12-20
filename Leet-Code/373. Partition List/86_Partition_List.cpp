#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int _v)
    {
        next = NULL;
        val = _v;
    }
};

class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *left = new ListNode(0), *right = new ListNode(0);
        left->next = head;

        ListNode *temp1 = left, *temp2 = right;

        while (head)
        {
            if (head->val < x)
            {
                temp1->next = head;
                temp1 = temp1->next;
            }
            else
            {
                temp2->next = head;
                temp2 = temp2->next;
            }
            head = head->next;
        }

        temp1->next = right->next;
        temp2->next = NULL;

        return left->next;
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

    obj.insertIntoNode(1, head);
    obj.insertIntoNode(4, head);
    obj.insertIntoNode(3, head);
    obj.insertIntoNode(2, head);
    obj.insertIntoNode(5, head);
    obj.insertIntoNode(2, head);

    int x = 3;

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *res = obj.partition(head, x);
    cout << "Print list after partition -> ";
    obj.printListOfNode(res);

    return 0;
}