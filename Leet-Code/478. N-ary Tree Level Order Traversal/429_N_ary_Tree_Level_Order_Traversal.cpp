#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> levelOrder(Node *root)
  {
    vector<vector<int>> res;

    if (!root)
      return res;

    queue<Node *> q;
    q.push(root);

    while (q.size())
    {
      int n = q.size();
      vector<int> level;

      for (int i = 0; i < n; i++)
      {
        Node *node = q.front();
        q.pop();

        level.push_back(node->val);

        // push all children node into the queue
        for (auto child : node->children)
          q.push(child);
      }
      res.push_back(level);
    }

    return res;
  }
};