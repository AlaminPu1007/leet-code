#include <bits/stdc++.h>
using namespace std;

// initialize a binary tree node
class Node
{
public:
  int s = 0, e = 0;
  Node *left, *right;
  Node(int _s, int _e)
  {
    s = _s;
    e = _e;
    left = NULL;
    right = NULL;
  }

public:
  bool insert(Node *root, int s, int e)
  {
    Node *temp = new Node(s, e);
    Node *cur = root;

    while (true)
    {
      // find node to the right of the root
      if (cur->e <= s)
      {
        // create new node
        if (!cur->right)
        {
          cur->right = temp;
          return true;
        }
        cur = cur->right;
      }
      else if (cur->s >= e)
      {
        if (!cur->left)
        {
          cur->left = temp;
          return true;
        }
        cur = cur->left;
      }
      else
        return false;
    }
  }
};

class MyCalendar
{
public:
  vector<vector<int>> events;
  Node *root;
  MyCalendar()
  {
    root = NULL;
  }

  bool book(int start, int end)
  {
    if (!root)
    {
      root = new Node(start, end);
      return true;
    }

    else
      return root->insert(root, start, end);
  }
};
