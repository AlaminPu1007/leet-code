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
    ListNode *insertionSortList(ListNode *head)
    {
        ListNode *dummyNode = new ListNode(0), *cur = head;

        while (cur != NULL)
        {
            // keep track of cur->next value
            ListNode *nextNode = cur->next;

            // we do not override the existing dummyNode
            ListNode *tempNode = dummyNode;

            // keep track of the last small value ex:(after, where our larger value will be inserted)
            // if tempNode->next is present && tempNode value less than to cur value

            while (tempNode->next != NULL && (tempNode->next->val < cur->val))
            {
                tempNode = tempNode->next;
            }
            
            cur->next = tempNode->next;
            tempNode->next = cur;
            cur = nextNode;
        }

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
    ListNode *head = NULL;

    obj.insertIntoNode(0, head);
    obj.insertIntoNode(1, head);
    obj.insertIntoNode(4, head);
    obj.insertIntoNode(3, head);
    obj.insertIntoNode(0, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *revList = obj.insertionSortList(head);

    // print list of node
    cout << "After reversing the node -> ";
    obj.printListOfNode(revList);
    cout << endl
         << endl;

    return 0;
}