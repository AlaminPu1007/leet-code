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
    ListNode *sortList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        // get middle the list
        ListNode *right = middleOfTheList(head), *left = head, *temp = NULL;

        temp = right->next;
        right->next = NULL;
        right = temp;

        left = sortList(left);
        right = sortList(right);

        return mergeList(left, right);
    }

    //

    // get middle of the linked list
    ListNode *middleOfTheList(ListNode *head)
    {
        ListNode *slow = head, *first = head->next;

        while (first != NULL && first->next != NULL)
        {
            slow = slow->next;
            first = first->next->next;
        }

        return slow;
    }

    // merge two list
    ListNode *mergeList(ListNode *list1, ListNode *list2)
    {
        ListNode *dummyNode = new ListNode(0);
        ListNode *tail = dummyNode;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1 != NULL)
            tail->next = list1;

        if (list2 != NULL)
            tail->next = list2;

        return dummyNode->next;
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

    ListNode *head = new ListNode(0);

    obj.insertIntoNode(4, head);
    obj.insertIntoNode(2, head);
    obj.insertIntoNode(1, head);
    obj.insertIntoNode(3, head);
    obj.insertIntoNode(6, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head->next);
    cout << endl
         << endl;

    ListNode *res = obj.sortList(head->next);

    // print list of node
    cout << "Print list after sorting -> ";
    obj.printListOfNode(res);
    cout << endl
         << endl;

    return 0;
}
