

class Solution
{
public:
    bool checkTree(TreeNode *root)
    {

        int count = 0;

        if (root->right)
            count += root->right->val;

        if (root->left)
            count += root->left->val;

        return root->val == count;
    }
};