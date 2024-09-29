

class Solution
{
public:
  bool evaluateTree(TreeNode *root)
  {
    // define a base case
    if (!root->left && !root->right)
      return root->val == 1;

    // do staff for OR operation
    if (root->val == 2)
    {
      return evaluateTree(root->left) || evaluateTree(root->right);
    }

    return evaluateTree(root->left) && evaluateTree(root->right);
    
  }
};