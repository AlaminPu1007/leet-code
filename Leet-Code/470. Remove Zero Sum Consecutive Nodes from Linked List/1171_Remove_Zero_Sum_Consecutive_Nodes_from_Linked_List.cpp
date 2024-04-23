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
    ListNode *removeZeroSumSublists(ListNode *head)
    {
        ListNode *dummyNode = new ListNode;
        dummyNode->next = head;

        unordered_map<int, ListNode *> Map;
        // insert first prefix
        Map[0] = dummyNode;

        int prefixSum = 0;

        while (head != NULL)
        {
            prefixSum += head->val;

            if (Map.find(prefixSum) != Map.end())
            {
                ListNode *start = Map[prefixSum];
                ListNode *temp = start;
                int tempPrefixSum = prefixSum;

                while (temp != head)
                {
                    temp = temp->next;
                    tempPrefixSum += temp->val;

                    if (temp != head)
                        Map.erase(tempPrefixSum);
                }
                start->next = temp->next;
            }
            else
            {
                Map[prefixSum] = head;
            }
            head = head->next;
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
    ListNode *head = NULL;

    obj.insertIntoNode(1, head);
    obj.insertIntoNode(2, head);
    obj.insertIntoNode(-3, head);
    obj.insertIntoNode(3, head);
    obj.insertIntoNode(1, head);

    // print list of node
    // cout << "After insertion of node -> ";
    // obj.printList(head);
    cout << endl
         << endl;

    ListNode *res = obj.removeZeroSumSublists(head);

    cout << endl
         << endl;

    // print list of node
    cout << "After merging of node -> ";
    obj.printList(res);

    return 0;
}
