
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
private:
    TreeNode *first, *last, *middle, *prv;

public:
    void recoverTree(TreeNode *root)
    {
        if (root == NULL)
            return;

        first = last = middle = NULL;
        prv = new TreeNode(INT_MIN);

        inOrderTraversal(root);

        if (first && last)
            swap(last->val, first->val);

        else if (first && middle)
            swap(middle->val, first->val);
    }

private:
    void inOrderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return;

        inOrderTraversal(root->left);

        // our business logic goes here

        if (prv != NULL && (root->val < prv->val))
        {
            // for first pointer
            if (first == NULL)
            {
                first = prv;
                middle = root;
            }
            else
                last = root;
        }

        // mark this node as previous
        prv = root;

        inOrderTraversal(root->right);
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
    obj.recoverTree(root);

    return 0;
}
