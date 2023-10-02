// Need to submit in leetcode
// https://leetcode.com/problems/merge-two-sorted-lists/
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
};

class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummyNode = new ListNode;
        ListNode *temp = dummyNode;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

        // now push remaining list
        if (list1 != NULL)
        {
            temp->next = list1;
        }
        else if (list2 != NULL)
        {
            temp->next = list2;
        }

        return dummyNode->next;
    }

    void insertIntoNode(int v, ListNode *&head)
    {
        // initialize a memory or address for new node
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

            // find out the last element
            while (newNode->next != NULL)
            {
                newNode = newNode->next;
            }
            newNode->next = temp;
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
    ListNode *list1 = NULL;
    ListNode *list2 = NULL;

    // for list 1
    obj.insertIntoNode(1, list1);
    obj.insertIntoNode(2, list1);
    obj.insertIntoNode(4, list1);

    cout << "Node of list1 -> ";
    obj.printList(list1);
    cout << endl
         << endl;

    // for list 2
    obj.insertIntoNode(1, list2);
    obj.insertIntoNode(3, list2);
    obj.insertIntoNode(4, list2);

    cout << "Node of list2 -> ";
    obj.printList(list2);
    cout << endl
         << endl;
    // return 0;

    ListNode *reverseNode = obj.mergeTwoLists(list1, list2);

    // print list
    cout << "Merge list  -> ";
    obj.printList(reverseNode);
    cout << endl
         << endl;

    // print list
    // cout << "Node of list2 -> ";
    // obj.printList(list2);
    // cout << endl
    //      << endl;

    return 0;
}