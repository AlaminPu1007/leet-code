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
  }
};

class Solution
{
public:
  ListNode *removeNodes(ListNode *head)
  {
    ListNode *dummyNode = new ListNode(0);
    ListNode *temp = head;

    stack<int> st;

    while (temp)
    {
      while (!st.empty() && st.top() < temp->val)
        st.pop();

      st.push(temp->val);

      temp = temp->next;
    }

    vector<int> list;
    temp = dummyNode;

    while (st.size())
    {
      list.push_back(st.top());
      st.pop();
    }

    reverse(list.begin(), list.end());

    for (int i = 0; i < list.size(); i++)
    {
      temp->next = new ListNode(list[i]);
      temp = temp->next;
    }

    return dummyNode->next;
  }
};

int main(void)
{
  Solution obj;
  ListNode *head = new ListNode(5);
  head->next = new ListNode(2);
  head->next->next = new ListNode(13);
  head->next->next->next = new ListNode(3);
  head->next->next->next->next = new ListNode(8);

  ListNode *res = obj.removeNodes(head);

  cout << res->val << endl;

  // while (res)
  // {
  //   cout << res->val << " ";
  //   res = res->next;
  // }

  return 0;
}