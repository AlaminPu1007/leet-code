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
    ListNode *middleNode(ListNode *head)
    {

        ListNode *first = head;
        ListNode *slow = head;

        int counter = 0;

        // first != NULL -> This portion is checked for boundary
        // first->next != NULL -> This portion is checked for to reach at last node
        while (first != NULL && first->next != NULL)
        {
            slow = slow->next;
            first = first->next->next;
        }

        // return with current node address
        return slow;
    }

    // Insert Node into linked list
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
            ListNode *newNode = head;

            // till to reach the last node
            while (newNode->next != NULL)
            {
                newNode = newNode->next;
            }
            // we should update to next pointer
            newNode->next = temp;
        }
    }
    // Method to print list of node
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
    // obj.insertIntoNode(6, head);
    // obj.insertIntoNode(7, head);

    // print list of node
    cout << "After insertion -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    // Now called the original approach
    cout << "Called original approach " << endl;
    ListNode *res = obj.middleNode(head);
    cout << endl
         << endl;

    // print list of node
    cout << "After get middle -> ";
    obj.printListOfNode(res);
    cout << endl
         << endl;

    return 0;
}