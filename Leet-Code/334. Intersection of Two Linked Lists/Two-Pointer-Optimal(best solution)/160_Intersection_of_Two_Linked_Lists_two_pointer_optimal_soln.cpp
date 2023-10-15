/** Accepted solution-> T.C = O(2m), S.C = O(1) */

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
        if (headA == NULL || headB == NULL)
            return NULL;

        ListNode *A = headA;
        ListNode *B = headB;

        while (A != B)
        {
            A = (A == NULL ? headB : A->next);
            B = (B == NULL ? headA : B->next);
        }

        return A;
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
