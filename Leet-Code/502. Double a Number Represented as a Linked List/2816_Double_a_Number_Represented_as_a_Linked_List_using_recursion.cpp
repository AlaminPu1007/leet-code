
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
  ListNode *doubleIt(ListNode *head)
  {
    if (!head)
      return NULL;

    int carry = DFS(head);

    if (carry)
    {
      ListNode *temp = new ListNode(carry);
      temp->next = head;
      head = temp;
    }

    return head;
  }

private:
  int DFS(ListNode *head)
  {
    if (!head)
      return 0;

    int doubleValue = (head->val * 2) + DFS(head->next);

    head->val = doubleValue % 10;

    // return the remain carry
    return doubleValue / 10;
  }
};

int main(void)
{
  Solution obj;

  ListNode *head = new ListNode(1);
  head->next = new ListNode(8);
  head->next->next = new ListNode(9);

  ListNode *res = obj.doubleIt(head);

  while (res)
  {
    cout << res->val << " ";
    res = res->next;
  }

  return 0;
}