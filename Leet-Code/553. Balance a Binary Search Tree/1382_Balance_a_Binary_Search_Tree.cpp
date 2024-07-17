#include <bits/stdc++.h>
using namespace std;

// define a class to Node
class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int _v)
  {
    val = _v;
    left = right = NULL;
  }
};

class Solution
{

public:
  TreeNode *balanceBST(TreeNode *root)
  {
    vector<int> nodeItem;

    // get the sorting order data from root
    dfsToGetSortedData(nodeItem, root);

    return getBalancedBST(nodeItem, 0, nodeItem.size() - 1);
  }
  // get node value into sorted order
  // This is in-order traversal approach
private:
  void dfsToGetSortedData(vector<int> &arr, TreeNode *root)
  {
    if (!root)
      return;

    // call dfs method for left subtree
    dfsToGetSortedData(arr, root->left);

    // store the node to get the appropriate data
    arr.push_back(root->val);

    // call dfs method for right subtree
    dfsToGetSortedData(arr, root->right);
  }

  // get the valid Balanced BST
private:
  TreeNode *getBalancedBST(vector<int> &arr, int left, int right)
  {
    // handled the base case
    if (left > right)
      return NULL;

    // get the middle item
    int mid = left + (right - left) / 2;

    TreeNode *root = new TreeNode(arr[mid]);

    // called the left sub-tree
    root->left = getBalancedBST(arr, left, mid - 1);

    // called the right sub-tree
    root->right = getBalancedBST(arr, mid + 1, right);

    return root;
  }

public:
  void printList(TreeNode *root)
  {
    if (!root)
      return;

    cout << root->val << " ";

    // called left sub-tree
    printList(root->left);

    // called right sub-tree
    printList(root->right);
  }
};

int main(void)
{
  Solution obj;

  // create a tree node
  TreeNode *root = new TreeNode(1);
  root->right = new TreeNode(2);
  root->right->right = new TreeNode(3);
  root->right->right->right = new TreeNode(4);

  TreeNode *res = obj.balanceBST(root);

  cout << "Print the result : ";

  obj.printList(res);
  cout << endl;

  return 0;
}