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
    left = right = NULL;
  }
};

class Solution
{
  int ans = 0;

public:
  int sumOfLeftLeaves(TreeNode *root)
  {
    if (root == NULL)
      return 0;

    DFS(root);

    return ans;
  }

private:
  void DFS(TreeNode *node)
  {
    if (!node)
      return;

    if (node->left && !node->left->left && !node->left->right)
      ans += node->left->val;

    DFS(node->left);
    DFS(node->right);
  }
};

int main(void)
{
  Solution obj;

  TreeNode *root = new TreeNode(3);

  root->left = new TreeNode(9);
  root->right = new TreeNode(20);

  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);

  cout << obj.sumOfLeftLeaves(root) << endl;

  return 0;
}