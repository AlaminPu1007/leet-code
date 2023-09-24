#include <bits/stdc++.h>
using namespace std;

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
// removed this before submission
struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // define a dummy node
        ListNode *dummyNode = new ListNode;
        // update dummy node with head
        dummyNode->next = head;

        ListNode *r = dummyNode;
        ListNode *l = dummyNode;

        for (int i = 0; i < n; i++)
        {
            r = r->next;
        }

        while (r->next != NULL)
        {
            r = r->next;
            l = l->next;
        }

        ListNode *temp = l->next;

        l->next = l->next->next;

        // cout << dummyNode->next << endl;
        delete (temp);

        return dummyNode->next;
    }

    void insertIntoNode(int v, ListNode *&head)
    {

        ListNode *temp = new ListNode;

        temp->val = v;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ListNode *currTemp = head;

            // we have to find the last item address to insert
            while (currTemp->next != NULL)
            {
                currTemp = currTemp->next;
            }
            currTemp->next = temp;
        }
    }

    void printListNode(ListNode *temp)
    {

        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
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

    // Print list
    cout << "Before remove n'th child -> ";
    obj.printListNode(head);
    cout << endl;

    ListNode *node = obj.removeNthFromEnd(head, 5);

    // Print list
    cout << "After remove n'th child -> ";
    obj.printListNode(node);
    cout << endl;

    return 0;
}