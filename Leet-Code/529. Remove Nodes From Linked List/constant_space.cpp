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

    head = reverseList(head);
    ListNode *sudoHead = head;

    int maxiMum = sudoHead->val;

    while (sudoHead->next)
    {

      if (sudoHead->next->val < maxiMum)
      {
        sudoHead->next = sudoHead->next->next;
      }
      else
      {
        maxiMum = sudoHead->next->val;
        sudoHead = sudoHead->next;
      }
    }

    return reverseList(head);
  }

private:
  ListNode *reverseList(ListNode *head)
  {
    ListNode *prvNode = NULL;

    while (head != NULL)
    {
      // keep track next node before removing pointer
      ListNode *newNode = head->next;

      // now update next pointer with reverse pointer login
      head->next = prvNode;

      // before
      prvNode = head;

      // update head with new node
      head = newNode;
    }

    return prvNode;
  }

public:
  void insertIntoNode(int v, ListNode *&head)
  {

    ListNode *temp = new ListNode(0);

    temp->val = v;
    temp->next = NULL;

    if (head == NULL)
    {
      head = temp;
    }
    else
    {
      ListNode *currTemp = head;

      // we have to find the last item address to insert
      while (currTemp->next != NULL)
      {
        currTemp = currTemp->next;
      }
      currTemp->next = temp;
    }
  }
};

int main(void)
{
  Solution obj;

  ListNode *head = NULL;

  obj.insertIntoNode(5, head);
  obj.insertIntoNode(2, head);
  obj.insertIntoNode(13, head);
  obj.insertIntoNode(3, head);
  obj.insertIntoNode(8, head);

  ListNode *res = obj.removeNodes(head);

  while (res)
  {
    cout << res->val << " ";
    res = res->next;
  }

  return 0;
}