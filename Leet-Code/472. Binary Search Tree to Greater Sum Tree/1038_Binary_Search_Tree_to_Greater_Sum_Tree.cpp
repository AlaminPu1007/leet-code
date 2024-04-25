#include <bits/stdc++.h>

using namespace std;

class TreeNode {
  public: int val;
  TreeNode * left;
  TreeNode * right;

  TreeNode(int _v) {
    val = _v;
    left = NULL;
    right = NULL;
  }
};

class Solution {
public: 
  TreeNode * convertBST(TreeNode * root) {
    int sum = 0;
    DFS(root, sum);
    return root;
  }
  
private: 
  void DFS(TreeNode * root, int & sum) {
    if (!root) return;

    DFS(root -> right, sum);

    sum += root -> val;
    root -> val = sum;

    DFS(root -> left, sum);
  }

public:
    void printList(TreeNode * root) {
      if (!root) return;

      cout << root -> val << " ";

      printList(root -> left);
      printList(root -> right);
    }
};

int main(void) {
  Solution obj;
  TreeNode * root = new TreeNode(4);

  root -> left = new TreeNode(1);
  root -> right = new TreeNode(6);

  root -> left -> left = new TreeNode(0);
  root -> left -> right = new TreeNode(2);
  root -> left -> right -> right = new TreeNode(3);

  root -> right -> left = new TreeNode(5);
  root -> right -> right = new TreeNode(7);

  root -> right -> right -> right = new TreeNode(8);

  root = obj.convertBST(root);

  obj.printList(root);

  return 0;
}