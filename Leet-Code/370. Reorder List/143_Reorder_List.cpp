#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int _val)
    {
        val = _val;
        next = NULL;
    }
};

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // cout << slow->val << endl;
        // get reverse node
        ListNode *reverseList = reverseNode(slow->next), *first = head;

        while (reverseList)
        {

            ListNode *temp1 = first->next, *temp2 = reverseList->next;

            first->next = reverseList;
            reverseList->next = temp1;

            first = temp1;
            reverseList = temp2;
        }

        first->next = NULL;

        // printListOfNode(head);
    }

    ListNode *reverseNode(ListNode *node)
    {
        ListNode *temp = node;
        ListNode *prv = NULL;

        while (temp != NULL)
        {
            ListNode *copyNextNode = temp->next;
            temp->next = prv;

            prv = temp;

            temp = copyNextNode;
        }

        return prv;
    }

    // print list
    void printListOfNode(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl
             << endl;
    }
};

int main(void)
{
    Solution obj;

    ListNode *head = new ListNode(0);

    ListNode *item1 = new ListNode(1);
    head->next = item1;

    ListNode *item2 = new ListNode(2);
    item1->next = item2;

    ListNode *item3 = new ListNode(3);
    item2->next = item3;

    ListNode *item4 = new ListNode(4);
    item3->next = item4;

    ListNode *item5 = new ListNode(5);
    item4->next = item5;

    // obj.printListOfNode(head->next);
    obj.reorderList(head->next);

    return 0;
}