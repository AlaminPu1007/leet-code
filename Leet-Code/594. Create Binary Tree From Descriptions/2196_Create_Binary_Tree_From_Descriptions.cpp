#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left, *right;
  TreeNode(int _v)
  {
    val = _v;
    left = right = NULL;
  }
};

class Solution
{
public:
  TreeNode *createBinaryTree(vector<vector<int>> &descriptions)
  {
    unordered_map<int, TreeNode *> nodesList;
    set<int> childrens;

    for (auto item : descriptions)
    {
      int parent = item[0];
      int child = item[1];
      bool is_left = (item[2] == 1);

      // store each child into set
      childrens.insert(child);

      // if node already not exists
      if (nodesList.find(parent) == nodesList.end())
      {
        nodesList[parent] = new TreeNode(parent);
      }

      // create a child node
      if (nodesList.find(child) == nodesList.end())
      {
        nodesList[child] = new TreeNode(child);
      }

      // adjust child node with parent
      if (is_left)
        nodesList[parent]->left = nodesList[child];
      else
        nodesList[parent]->right = nodesList[child];
    }

    // get the parent node
    for (auto item : descriptions)
    {
      int parent = item[0];

      if (childrens.find(parent) == childrens.end())
        return nodesList[parent];
    }

    return NULL;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{20, 15, 1}, {20, 17, 0}, {50, 20, 1}, {50, 80, 0}, {80, 19, 1}};
  TreeNode *res = obj.createBinaryTree(arr);
  return 0;
}