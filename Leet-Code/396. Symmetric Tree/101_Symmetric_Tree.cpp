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
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return false;

        return DFS(root->left, root->right);
    }

private:
    bool DFS(TreeNode *left, TreeNode *right)
    {
        if (left == NULL || right == NULL)
            return left == right;

        if (left->val != right->val)
            return false;

        return DFS(left->left, right->right) && DFS(left->right, right->left);
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
    cout << obj.isSymmetric(root) << endl;

    return 0;
}
