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
    left = NULL;
    right = NULL;
  }
};

class Solution
{
public:
  TreeNode *replaceValueInTree(TreeNode *root)
  {
    queue<TreeNode *> q;
    vector<long long> levelSum;

    q.push(root);

    while (!q.empty())
    {
      int n = q.size();
      long long sum = 0;

      for (int i = 0; i < n; i++)
      {
        TreeNode *temp = q.front();
        q.pop();

        sum += temp->val;

        if (temp->left)
        {
          q.push(temp->left);
        }

        if (temp->right)
        {
          q.push(temp->right);
        }
      }
      levelSum.push_back(sum);
    }

    queue<pair<TreeNode *, long long>> q2;

    q2.push({root, root->val});

    int level = 0;

    while (!q2.empty())
    {
      int n = q2.size();
      long long sum = 0;
      long long cur_level_sum = levelSum[level];

      for (int i = 0; i < n; i++)
      {
        TreeNode *temp = q2.front().first;
        int value = q2.front().second;
        q2.pop();

        // replace node->val with cousin
        temp->val = (int)(cur_level_sum - value);

        long long child_sum = 0;

        // update child sum
        if (temp->left)
          child_sum += temp->left->val;

        if (temp->right)
          child_sum += temp->right->val;

        if (temp->left)
        {
          q2.push({temp->left,
                   child_sum});
        }

        if (temp->right)
        {
          q2.push({temp->right, child_sum});
        }
      }
      level++;
    }

    return root;
  }
};

int main(void)
{
  Solution obj;

  TreeNode *root = new TreeNode(5);
  // level-1
  root->right = new TreeNode(9);
  root->left = new TreeNode(4);

  // level - 2
  root->right->right = new TreeNode(7);
  // root->right->left = new TreeNode(3);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(10);

  // level-3
  // root->left->left->left = new TreeNode(4);
  // root->left->left->right = new TreeNode(6);

  obj.replaceValueInTree(root);

  return 0;
}