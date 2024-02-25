
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
    bool isValidBST(TreeNode *root)
    {
        return DFS(root, LONG_MIN, LONG_MAX);
    }

private:
    bool DFS(TreeNode *root, long minValue, long maxValue)
    {
        if (root == NULL)
            return true;

        if (root->val >= maxValue || root->val <= minValue)
            return false;

        return DFS(root->left, minValue, root->val) && DFS(root->right, root->val, maxValue);

        return false;
    }
};

int main(void)
{
    // https://www.geeksforgeeks.org/inorder-traversal-of-binary-tree/
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    cout << obj.isValidBST(root) << endl;

    return 0;
}
