#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int _v)
  {
    val = _v;
    left = nullptr;
    right = nullptr;
  }
};

class Solution
{
public:
  bool flipEquiv(TreeNode *root1, TreeNode *root2)
  {
    if (!root1 && !root2)
      return true;

    else if (!root1 || !root2)
      return false;

    if (root1->val != root2->val)
    {
      return false;
    }

    // first need to check if booth two tree are already equivelent
    bool isAlreadyEquivelent = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);

    // check the are equivelent after flip
    bool isEquivelentDoFlip = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);

    return isAlreadyEquivelent || isEquivelentDoFlip;
  }
};

int main(void)
{
  Solution obj;

  // list-1
  TreeNode *root1 = new TreeNode(1);

  root1->left = new TreeNode(2);
  root1->right = new TreeNode(3);

  root1->right->left = new TreeNode(6);

  root1->left->left = new TreeNode(4);
  root1->left->right = new TreeNode(5);

  root1->left->right->left = new TreeNode(7);
  root1->left->right->right = new TreeNode(8);

  // list-2
  TreeNode *root2 = new TreeNode(1);

  root2->left = new TreeNode(3);
  root2->right = new TreeNode(2);

  root2->left->right = new TreeNode(6);

  root2->right->left = new TreeNode(4);
  root2->right->right = new TreeNode(5);

  root2->right->right->left = new TreeNode(8);
  root2->right->right->right = new TreeNode(7);

  return 0;
}