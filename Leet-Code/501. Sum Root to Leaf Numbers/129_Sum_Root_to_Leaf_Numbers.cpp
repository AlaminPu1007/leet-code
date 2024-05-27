#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int _val)
  {
    val = _val;
    left = NULL;
    right = NULL;
  }
};

class Solution
{
  int ans = 0;

public:
  int sumNumbers(TreeNode *root)
  {
    if (!root)
      return 0;
    DFS(root, 0);
    return ans;
  }
  void DFS(TreeNode *node, int value)
  {
    if (!node)
      return;

    value = (value * 10 + node->val);

    if (!node->left && !node->right)
    {
      ans += value;
    }

    DFS(node->left, value);
    DFS(node->right, value);
  }
};

int main(void)
{
  Solution obj;

  TreeNode *root = new TreeNode(4);

  root->left = new TreeNode(9);
  root->right = new TreeNode(0);

  root->left->left = new TreeNode(5);
  root->left->right = new TreeNode(1);

  cout << obj.sumNumbers(root) << endl;
  return 0;
}