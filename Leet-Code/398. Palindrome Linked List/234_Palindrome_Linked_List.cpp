
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
    bool isPalindrome(ListNode *head)
    {

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        slow = reverseList(slow->next);

        while (slow)
        {
            if (slow->val != head->val)
                return false;

            slow = slow->next;
            head = head->next;
        }

        return true;
    }
    // reverse linked-list
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

    void insertIntoNode(ListNode *&head, int v)
    {
        ListNode *dummyNode = new ListNode;

        dummyNode->val = v;
        dummyNode->next = NULL;

        if (head == NULL)
        {
            head = dummyNode;
        }
        else
        {
            ListNode *copyNode = head;

            while (copyNode->next != NULL)
            {
                copyNode = copyNode->next;
            }
            copyNode->next = dummyNode;
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

    obj.insertIntoNode(head, 1);
    obj.insertIntoNode(head, 2);
    obj.insertIntoNode(head, 3);
    obj.insertIntoNode(head, 4);
    obj.insertIntoNode(head, 5);

    // print list after insertion
    // cout << "Print list of node -> ";
    // obj.printList(head);
    // cout << endl
    //      << endl;

    cout << "Called root method ";
    obj.isPalindrome(head);

    return 0;
}