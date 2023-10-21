#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode *temp = head;

        // count the length of given list & make it's as a circular
        // linked list by put head into last->next node
        int counter = 1;

        while (temp->next)
        {
            counter++;
            temp = temp->next;
        }
        temp->next = head;

        // now rotate k no of element
        k = k % counter;
        k = counter - k;

        temp = head;

        while (--k)
        {
            temp = temp->next;
        }

        head = temp->next;
        temp->next = NULL;

        return head;
    }

    void insertIntoNode(int v, ListNode *&head)
    {
        ListNode *temp = new ListNode;
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
    obj.insertIntoNode(40, head);
    obj.insertIntoNode(50, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *revList = obj.rotateRight(head, 2);

    // print list of node
    cout << "After reversing the node -> ";
    obj.printListOfNode(revList);
    cout << endl
         << endl;

    return 0;
}