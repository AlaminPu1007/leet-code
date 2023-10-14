/** Accepted solution-> T.C = O(m) + O(m-n) + o(n) => O(2m), S.C = O(1) */

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int counter1 = 0, counter2 = 0;

        ListNode *dummyNodeA = headA;
        ListNode *dummyNodeB = headB;

        while (dummyNodeA != NULL)
        {
            counter1++;
            dummyNodeA = dummyNodeA->next;
        }

        while (dummyNodeB != NULL)
        {
            counter2++;
            dummyNodeB = dummyNodeB->next;
        }

        int diff = abs(counter2 - counter1);

        dummyNodeA = headA;
        dummyNodeB = headB;

        if (counter1 > counter2)
        {
            while (diff--)
            {
                dummyNodeA = dummyNodeA->next;
            }
        }
        else
        {
            while (diff--)
            {
                dummyNodeB = dummyNodeB->next;
            }
        }

        while (dummyNodeA != NULL && dummyNodeB != NULL)
        {
            if (dummyNodeA == dummyNodeB)
                return dummyNodeA;

            dummyNodeA = dummyNodeA->next;
            dummyNodeB = dummyNodeB->next;
        }

        return NULL;
    }
};

int main(void)
{
    // Create two linked lists with an intersection
    ListNode *commonNode = new ListNode(8);
    commonNode->next = new ListNode(4);
    commonNode->next->next = new ListNode(5);

    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = commonNode;

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = commonNode;

    Solution obj;

    ListNode *intersection = obj.getIntersectionNode(headA, headB);

    if (intersection != NULL)
    {
        std::cout << "Intersection node value: " << intersection->val << std::endl;
    }
    else
    {
        std::cout << "No intersection found." << std::endl;
    }

    return 0;
}
