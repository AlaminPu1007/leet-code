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
  vector<ListNode *> splitListToParts(ListNode *head, int k)
  {
    int len = 0;
    ListNode *sudoHead = head;
    while (sudoHead)
    {
      len++;
      sudoHead = sudoHead->next;
    }

    int extra_nodes = (len % k);
    int eachBucketNodes = (len / k);

    sudoHead = head;
    ListNode *prv = NULL;

    vector<ListNode *> res(k, NULL);

    for (int i = 0; sudoHead && i < k; i++)
    {
      res[i] = sudoHead;

      // split into eachBucketNodes
      for (int j = 1; j <= eachBucketNodes + (extra_nodes > 0 ? 1 : 0); j++)
      {
        prv = sudoHead;
        sudoHead = sudoHead->next;
      }

      prv->next = NULL;

      extra_nodes--;
    }

    return res;
  }

public:
  void insertIntoList(ListNode *&head, int data)
  {
    ListNode *temp = new ListNode(data);
    ListNode *sudoHead = head;

    while (sudoHead->next)
    {
      sudoHead = sudoHead->next;
    }
    sudoHead->next = temp;
  }
  void printList(ListNode *head)
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

  ListNode *head = new ListNode(1);
  vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < arr.size(); i++)
  {
    obj.insertIntoList(head, arr[i]);
  }

  cout << "List is -> ";
  obj.printList(head);
  cout << endl
       << endl;

  vector<ListNode *> res = obj.splitListToParts(head, 5);

  return 0;
}