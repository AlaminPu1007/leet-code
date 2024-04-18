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
  string res = "";

public:
  string smallestFromLeaf(TreeNode *root)
  {
    if (root == NULL)
      return res;

    DFS(root, "");
    return res;
  }

private:
  void DFS(TreeNode *node, string cur)
  {
    if (!node)
      return;

    cur = (char)(node->val + 'a') + cur;

    if (!node->left && !node->right)
    {
      if (res == "" || res > cur)
      {
        res = cur;
      }
      return;
    }

    // call the left and right child
    DFS(node->left, cur);
    DFS(node->right, cur);
  }
};

int main(void)
{
  Solution obj;
  TreeNode *root = new TreeNode(0);

  root->left = new TreeNode(1);
  root->right = new TreeNode(1);

  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(4);

  root->right->left = new TreeNode(3);
  root->right->right = new TreeNode(4);

  cout << obj.smallestFromLeaf(root) << endl;

  return 0;
}