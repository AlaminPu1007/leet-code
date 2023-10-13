/** Accepted solution-> T.C = O(n + m), S.C = O(n) */

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
        unordered_map<ListNode *, bool> Map;

        while (headA != NULL)
        {
            Map[headA] = true;
            headA = headA->next;
        }

        while (headB != NULL)
        {
            if (Map.find(headB) != Map.end())
            {
                return headB;
            }

            headB = headB->next;
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
