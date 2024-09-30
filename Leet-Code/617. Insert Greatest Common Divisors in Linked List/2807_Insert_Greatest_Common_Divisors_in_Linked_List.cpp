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
    next = nullptr;
  }
};

class Solution
{
public:
  ListNode *insertGreatestCommonDivisors(ListNode *head)
  {
    ListNode *cur = head;
    ListNode *next_node = cur->next;

    while (cur && cur->next)
    {
      int gcdValue = __gcd(cur->val, next_node->val);

      ListNode *temp = new ListNode(gcdValue);

      cur->next = temp;
      temp->next = next_node;

      cur = next_node;
      next_node = next_node->next;
    }

    return head;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {18, 6, 10, 3};
  ListNode *head = new ListNode(arr[0]);

  for (int i = 1; i < arr.size(); i++)
  {
    ListNode *temp = new ListNode(arr[i]);

    ListNode *sudoHead = head;
    while (sudoHead->next)
      sudoHead = sudoHead->next;
    sudoHead->next = temp;
  }

  ListNode *res = obj.insertGreatestCommonDivisors(head);

  while (res)
  {
    cout << res->val << " ";
    res = res->next;
  }

  return 0;
}