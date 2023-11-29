#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }

    // Method to insert node into singly liked list
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
            ListNode *copyNode = head;

            while (copyNode->next != NULL)
            {
                copyNode = copyNode->next;
            }
            copyNode->next = temp;
        }
    }

    // Method to print list of node
    void printList(ListNode *head)
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

    obj.deleteNode(head->next->next);

    // print list of node
    // cout << "After merging of node -> ";
    obj.printList(head);

    return 0;
}