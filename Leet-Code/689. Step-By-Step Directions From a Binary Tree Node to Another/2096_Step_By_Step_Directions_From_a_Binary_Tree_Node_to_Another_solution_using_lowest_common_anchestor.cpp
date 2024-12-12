/*
  The though process would be like, first we will find out the lowest common ancestor between source and destination.
  The we will create out path
*/

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
    left = right = NULL;
    val = _v;
  }
};

class Solution
{
public:
  string getDirections(TreeNode *root, int startValue, int destValue)
  {

    // find the common lowest ancestor between startValue & destValue
    TreeNode *LCA = findLCA(root, startValue, destValue);

    string left_path = "";
    DFS(LCA, left_path, startValue);

    string right_path = "";
    DFS(LCA, right_path, destValue);

    string res = "";
    int j = 0;

    // create U path
    while (j < left_path.size())
    {
      res += 'U';
      j++;
    }

    res += right_path;

    return res;
  }

private:
  bool DFS(TreeNode *root, string &path, int target)
  {
    if (!root)
      return false;

    if (root->val == target)
      return true;

    // start the left path
    path.push_back('L');

    // call the next left node
    if (DFS(root->left, path, target))
      return true;

    // removed the left path
    path.pop_back();

    // do staff for right child
    path.push_back('R');
    // call the next left node

    if (DFS(root->right, path, target))
      return true;

    path.pop_back();

    // if any of them is not found
    return false;
  }

private:
  TreeNode *findLCA(TreeNode *root, int src, int des)
  {
    if (!root)
      return NULL;

    if (root->val == src || root->val == des)
      return root;

    TreeNode *left_child = findLCA(root->left, src, des);
    TreeNode *right_child = findLCA(root->right, src, des);

    if (left_child && right_child)
      return root;

    if (left_child && !right_child)
      return left_child;

    if (!left_child && right_child)
      return right_child;

    return NULL;
  }
};

int main(void)
{
  Solution obj;

  // create a tree
  TreeNode *root = new TreeNode(5);

  root->left = new TreeNode(1);
  root->left->left = new TreeNode(3);

  root->right = new TreeNode(2);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(4);

  int startValue = 3, destValue = 6;

  cout << obj.getDirections(root, startValue, destValue) << endl;

  return 0;
}