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

// Removed this  ListNode before submission.
struct ListNode
{
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr) {}
    // ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // ListNode *head = new ListNode;
    // Solution()
    // {
    //     head = NULL;
    // }

public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prvNode = NULL;

        // till head not equal to NULL
        while (head != NULL)
        {
            // keep track next node before removing pointer
            ListNode *newNode = head->next;
            // now update next pointer with reverse pointer login
            head->next = prvNode;
            // before
            prvNode = head;
            // update head with new node
            head = newNode;
        }
        return prvNode;
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

    ListNode *reverseNode = obj.reverseList(head);
    head = reverseNode;

    while (reverseNode != NULL)
    {
        cout << reverseNode->val << " ";
        reverseNode = reverseNode->next;
    }

    cout << endl;

    // print list
    obj.printList(head);

    return 0;
}