// unsolved
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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        // get height of the left child
        int lh = maxDepth(root->left);

        // get height of the right child
        int rh = maxDepth(root->right);

        return 1 + max(lh, rh);
    }
};

int main(void)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    cout << obj.maxDepth(root) << endl;

    return 0;
}
