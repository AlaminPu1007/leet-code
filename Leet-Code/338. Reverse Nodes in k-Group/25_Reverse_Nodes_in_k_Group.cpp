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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *dummyNode = new ListNode;
        dummyNode->next = head;

        ListNode *prv = dummyNode, *curNode = dummyNode, *nextNode = dummyNode;

        int count = 0;

        while (curNode->next != NULL)
        {
            count++;
            curNode = curNode->next;
        }

        // cout << count << endl;
        while (count >= k)
        {
            curNode = prv->next;
            nextNode = curNode->next;

            for (int i = 1; i < k; i++)
            {
                curNode->next = nextNode->next;
                nextNode->next = prv->next;
                prv->next = nextNode;
                nextNode = curNode->next;
            }
            prv = curNode;
            count -= k;
        }

        return dummyNode->next;
    }

    void insertIntoNode(int v, ListNode *&head)
    {
        ListNode *temp = new ListNode;
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

    obj.insertIntoNode(10, head);
    obj.insertIntoNode(20, head);
    obj.insertIntoNode(30, head);
    obj.insertIntoNode(40, head);
    obj.insertIntoNode(50, head);
    obj.insertIntoNode(60, head);
    obj.insertIntoNode(70, head);
    obj.insertIntoNode(80, head);

    // print list of node
    cout << "Print list of node -> ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    ListNode *revKGroup = obj.reverseKGroup(head, 3);

    // print list of node
    cout << "Print reverse list of node -> ";
    obj.printListOfNode(revKGroup);
    cout << endl
         << endl;

    return 0;
}