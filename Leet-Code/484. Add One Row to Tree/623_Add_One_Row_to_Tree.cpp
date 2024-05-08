#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left, *right;

  TreeNode(int _val)
  {
    val = _val;
    left = NULL;
    right = NULL;
  }
};

class Solution
{
public:
  TreeNode *addOneRow(TreeNode *root, int val, int depth)
  {

    if (depth == 1)
    {
      TreeNode *newRoot = new TreeNode(val);

      newRoot->left = root;

      return newRoot;
    }

    queue<TreeNode *> q;
    int d = 1;

    TreeNode *sudoHead = root;

    q.push(root);

    while (!q.empty())
    {
      int size = q.size();
      d++;

      for (int i = 0; i < size; i++)
      {
        TreeNode *node = q.front();
        q.pop();

        if (d == depth)
        {
          TreeNode *newLeft = new TreeNode(val);
          TreeNode *newRight = new TreeNode(val);

          newLeft->left = node->left;
          newRight->right = node->right;

          node->left = newLeft;
          node->right = newRight;
        }

        if (node->left)
        {
          q.push(node->left);
        }

        if (node->right)
        {
          q.push(node->right);
        }
      }
    }

    return sudoHead;
  }

public:
  void printList(TreeNode *root)
  {
    if (!root)
      return;

    cout << root->val << " ";

    printList(root->left);
    printList(root->right);
  }
};

int main(void)
{
  Solution obj;

  TreeNode *root = new TreeNode(4);

  root->left = new TreeNode(2);
  root->right = new TreeNode(6);

  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(1);

  root->right->left = new TreeNode(5);
  int val = 1, depth = 2;

  TreeNode *res = obj.addOneRow(root, val, depth);

  obj.printList(res);

  return 0;
}

// Output : [ 4, 1, 1, 2, null, null, 6, 3, 1, 5 ]