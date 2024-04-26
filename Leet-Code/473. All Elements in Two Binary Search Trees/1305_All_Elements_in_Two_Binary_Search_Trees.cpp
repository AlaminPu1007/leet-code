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
  vector<int>res;
public: 
  vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    
    if(root1 == NULL && root2 == NULL)
     return res;


        DFS(root1);
        DFS(root2);

        sort(res.begin(), res.end());
        return res;
    }
  
private: 
  void DFS(TreeNode * root) {
    if (!root) return;

    res.push_back(root->val);

    DFS(root -> left);
    DFS(root -> right);

  }
};
