#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
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
    bool isCriticalIdx(ListNode *prv, ListNode *cur, ListNode *next)
    {
        return (prv->val > cur->val && cur->val < next->val) || (prv->val < cur->val && cur->val > next->val);
    }

    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        int i = 1;
        int first_critical_idx = 0, previous_critical_idx = 0;
        int max_critical_idx = -1, min_critical_idx = INT_MAX;

        ListNode *prv = head, *cur = head->next, *next = head->next->next;

        while (next)
        {

            // it it's critical index
            if (isCriticalIdx(prv, cur, next))
            {

                if (first_critical_idx)
                {
                    max_critical_idx = (i - first_critical_idx);
                    min_critical_idx = min(min_critical_idx, i - previous_critical_idx);
                }
                else
                    first_critical_idx = i;

                // update previous pointer always
                previous_critical_idx = i;
            }

            // update the pointer
            prv = cur;
            cur = next;
            next = next->next;

            // increment index
            i++;
        }

        if (min_critical_idx == INT_MAX)
            min_critical_idx = -1;

        return {min_critical_idx, max_critical_idx};
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

    void insertIntoNode(int v, ListNode *&head)
    {
        ListNode *temp = new ListNode(v);

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
};

int main(void)
{

    ListNode *head = NULL;

    Solution obj;

    vector<int> arr = {1, 3, 2, 2, 3, 2, 2, 2, 7};

    for (auto item : arr)
        obj.insertIntoNode(item, head);

    cout << "Print list after insertion : ";
    obj.printListOfNode(head);
    cout << endl
         << endl;

    vector<int> res = obj.nodesBetweenCriticalPoints(head);

    for (auto item : res)
        cout << item << " ";

    return 0;
}