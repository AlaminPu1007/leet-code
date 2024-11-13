#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left, *right;
  TreeNode(int x)
  {
    val = x;
    left = nullptr;
    right = nullptr;
  }
};

class Solution
{
public:
  long long kthLargestLevelSum(TreeNode *root, int k)
  {
    priority_queue<long long> pq;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
      int n = q.size();

      long long sum = 0;

      for (int i = 0; i < n; i++)
      {
        TreeNode *temp = q.front();
        q.pop();

        sum += temp->val;

        if (temp->left)
        {
          q.push(temp->left);
        }

        if (temp->right)
        {
          q.push(temp->right);
        }
      }
      pq.push(sum);
    }

    while (pq.size() && k)
    {
      k--;
      long long value = pq.top();
      pq.pop();

      if (k == 0)
        return value;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;

  TreeNode *root = new TreeNode(5);
  // level-1
  root->right = new TreeNode(9);
  root->left = new TreeNode(8);

  // level - 2
  root->right->right = new TreeNode(7);
  root->right->left = new TreeNode(3);
  root->left->left = new TreeNode(2);
  root->left->right = new TreeNode(1);

  // level-3
  root->left->left->left = new TreeNode(4);
  root->left->left->right = new TreeNode(6);

  cout << obj.kthLargestLevelSum(root, 2) << endl;

  return 0;
}