
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

    // Reverse the given list
    head = ReverseList(head);

    int carry = 0;

    ListNode *sudoHead = head;

    while (sudoHead != NULL)
    {
      int doubledValue = (sudoHead->val * 2) + carry;
      sudoHead->val = (doubledValue % 10);
      carry = (doubledValue / 10);

      sudoHead = sudoHead->next;
    }

    head = ReverseList(head);

    if (carry)
    {
      ListNode *temp = new ListNode(carry);
      temp->next = head;
      head = temp;
    }

    return head;
  }

private:
  ListNode *ReverseList(ListNode *head)
  {
    ListNode *prv = NULL;
    while (head)
    {
      ListNode *temp = head->next;
      head->next = prv;
      prv = head;
      head = temp;
    }

    return prv;
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