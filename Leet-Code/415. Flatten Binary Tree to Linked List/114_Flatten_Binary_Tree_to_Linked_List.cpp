
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
    TreeNode *prv = NULL;

private:
    void DFS(TreeNode *root)

    {
        if (root == NULL)
            return;

        DFS(root->right);
        DFS(root->left);

        root->right = prv;
        root->left = NULL;

        prv = root;
    }

public:
    void flatten(TreeNode *root)
    {
        DFS(root);
    }

    void printTheList(TreeNode *root)
    {
        if (root == NULL)
            return;

        cout << root->val << " ";

        printTheList(root->right);
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
    obj.flatten(root);

    obj.printTheList(root);

    return 0;
}
