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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        int i = 1;

        ListNode *sudoHead = list1;

        while (i < a)
        {
            sudoHead = sudoHead->next;
            i++;
        }

        cout << sudoHead->val << endl;

        ListNode *temp = sudoHead;

        // now get the last pointer from b
        while (i <= b)
        {
            sudoHead = sudoHead->next;
            i++;
        }

        temp->next = list2;

        while (list2->next)
            list2 = list2->next;

        list2->next = sudoHead->next;

        return list1;
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
    ListNode *list1 = NULL, *list2 = NULL;

    obj.insertIntoNode(0, list1);
    obj.insertIntoNode(1, list1);
    obj.insertIntoNode(2, list1);
    obj.insertIntoNode(3, list1);
    obj.insertIntoNode(4, list1);
    obj.insertIntoNode(5, list1);
    obj.insertIntoNode(6, list1);

    obj.insertIntoNode(10000, list2);
    obj.insertIntoNode(10002, list2);
    obj.insertIntoNode(10003, list2);
    obj.insertIntoNode(10004, list2);

    ListNode *res = obj.mergeInBetween(list1, 2, 5, list2);

    // print list of node
    // cout << "After merging of node -> ";
    obj.printList(res);

    return 0;
}