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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyNode = new ListNode;
        ListNode *temp = dummyNode;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;

            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;

            carry = sum / 10;

            // define temp node
            ListNode *newNode = new ListNode;

            newNode->val = (int)(sum % 10);
            newNode->next = NULL;

            temp->next = newNode;
            temp = newNode;
        }

        return dummyNode->next;
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
    ListNode *list1 = NULL;

    ListNode *list2 = NULL;

    obj.insertIntoNode(2, list1);
    obj.insertIntoNode(4, list1);
    obj.insertIntoNode(3, list1);

    // for list2
    obj.insertIntoNode(5, list2);
    obj.insertIntoNode(6, list2);
    obj.insertIntoNode(7, list2);
    obj.insertIntoNode(9, list2);

    // print list of node
    // cout << "After insertion of node -> ";
    // obj.printList(head);
    cout << endl
         << endl;

    ListNode *res = obj.addTwoNumbers(list1, list2);

    cout << endl
         << endl;

    // print list of node
    cout << "After merging of node -> ";
    obj.printList(res);

    return 0;
}
