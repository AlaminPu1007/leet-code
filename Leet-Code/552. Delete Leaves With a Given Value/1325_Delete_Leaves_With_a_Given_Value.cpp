#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int _v)
    {
        val = _v;
        right = NULL;
        left = NULL;
    }
};

class Solution
{
public:
    // we are using postorder traversal to solve this problem
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        if (root == NULL)
            return NULL;

        // visit the left most child
        root->left = removeLeafNodes(root->left, target);

        // visit the right most child
        root->right = removeLeafNodes(root->right, target);

        // check it's leaf node as well as target node
        // if it's true, then we will return null, avoid to connect it with root node
        if (!root->left && !root->right && root->val == target)
            return NULL;

        // other wise connect it with root
        return root;
    }
};

int main(void)
{
    Solution obj;

    // create tree
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);

    TreeNode *res = obj.removeLeafNodes(root, 3);

    return 0;
}