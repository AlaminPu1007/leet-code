#include <bits/stdc++.h>
using namespace std;

// create List node
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
  ListNode *mergeNodes(ListNode *head)
  {
    ListNode *sudoHead = head->next;
    ListNode *dummyNode = new ListNode(0);
    ListNode *tempNode = dummyNode;

    int sum = 0;

    while (sudoHead)
    {

      sum += sudoHead->val;

      if (sudoHead->val == 0)
      {

        ListNode *temp = new ListNode(sum);
        tempNode->next = temp;
        tempNode = tempNode->next;

        sum = 0;
      }

      sudoHead = sudoHead->next;
    }

    return dummyNode->next;
  }

public:
  void insertIntoNode(ListNode *&head, int val)
  {
    ListNode *temp = new ListNode(val);

    if (head == NULL)
    {
      head = temp;
    }
    else
    {
      ListNode *sudoHead = head;

      while (sudoHead->next)
      {
        sudoHead = sudoHead->next;
      }
      sudoHead->next = temp;
    }
  }

public:
  void printListOfNode(ListNode *head)
  {
    while (head)
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

  vector<int> arr = {0, 3, 1, 0, 4, 5, 2, 0};

  for (auto item : arr)
  {
    obj.insertIntoNode(head, item);
  }

  // cout << "Print List -> ";
  // obj.printListOfNode(head);
  // cout << endl
  //      << endl;

  ListNode *res = obj.mergeNodes(head);

  cout << "Print Res -> ";
  obj.printListOfNode(res);
  cout << endl
       << endl;

  return 0;
}