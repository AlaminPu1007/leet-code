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
  ListNode *detectCycle(ListNode *head)
  {
    ListNode *slow = head, *fast = head;
    ListNode *dummyNode = new ListNode(0);
    dummyNode->next = head;

    while (fast && fast->next && fast->next->next)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
      {

        slow = head;

        while (slow != fast)
        {
          slow = slow->next;
          fast = fast->next;
        }

        return fast;
      }
    }

    return NULL;
  }
};

int main(void)
{
  Solution obj;

  ListNode *head = new ListNode(3);
  head->next = new ListNode(2);
  head->next->next = new ListNode(0);
  head->next->next->next = new ListNode(-4);
  head->next->next->next->next = head->next;

  ListNode *res = obj.detectCycle(head);
  cout << res->val << endl;

  return 0;
}

// 3,2,0,-4