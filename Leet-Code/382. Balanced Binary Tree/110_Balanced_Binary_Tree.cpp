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
    bool isBalanced(TreeNode *root)
    {
        int res = BlancedTree(root);
        return res == -1 ? false : true;
    }

private:
    int BlancedTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = BlancedTree(root->left);
        int rh = BlancedTree(root->right);

        if (lh == -1 || rh == -1)
            return -1;

        if (abs(lh - rh) > 1)
            return -1;

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
    cout << obj.isBalanced(root) << endl;

    return 0;
}
