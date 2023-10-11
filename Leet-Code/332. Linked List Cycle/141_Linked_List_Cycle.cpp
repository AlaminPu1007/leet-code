
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
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode *, int> Map;
        while (head != NULL)
        {
            if (Map.find(head) != Map.end())
                return true;

            Map[head]++;
            head = head->next;
        }
        return false;
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

    obj.insertIntoNode(2, list1);
    obj.insertIntoNode(4, list1);
    obj.insertIntoNode(3, list1);

    // print list of node
    // cout << "After insertion of node -> ";
    obj.printList(list1);
    cout << endl;

    cout << obj.hasCycle(list1) << endl;

    return 0;
}