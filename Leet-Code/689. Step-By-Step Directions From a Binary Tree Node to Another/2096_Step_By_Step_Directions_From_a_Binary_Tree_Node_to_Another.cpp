/**
 * Without found the lowest common ancestor
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
    string path = "";

    string left_path = "";
    DFS(root, left_path, startValue);

    string right_path = "";
    DFS(root, right_path, destValue);

    int i = 0;
    string res = "";

    while (i < min(left_path.size(), right_path.size()))
    {
      if (left_path[i] != right_path[i])
        break;

      i++;
    }

    int j = i;

    // create U path
    while (j < left_path.size())
    {
      res += 'U';
      j++;
    }

    while (i < right_path.size())
      res += right_path[i++];

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