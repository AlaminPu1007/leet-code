
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
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return NULL;

        if (key == root->val)
            return helperMethod(root);

        TreeNode *dummyHead = root;

        while (root != NULL)
        {
            if (key < root->val)
            {
                if (root->left && key == root->left->val)
                {
                    root->left = helperMethod(root->left);
                    break;
                }

                else
                    root = root->left;
            }
            else
            {
                if (root->right && key == root->right->val)
                {
                    root->right = helperMethod(root->right);
                    break;
                }

                else
                    root = root->right;
            }
        }

        return dummyHead;
    }

private:
    TreeNode *helperMethod(TreeNode *root)
    {
        if (root->right == NULL)
            return root->left;

        if (root->left == NULL)
            return root->right;

        TreeNode *rightChild = root->right;
        TreeNode *lastRight = findLastRightChild(root->left);
        lastRight->right = rightChild;

        return root->left;
    }

private:
    TreeNode *findLastRightChild(TreeNode *node)
    {
        if (node->right == NULL)
            return node;

        return findLastRightChild(node->right);
    }

public:
    void printTheList(TreeNode *root)
    {
        if (root == NULL)
            return;

        cout << root->val << " ";

        printTheList(root->left);
        printTheList(root->right);
    }
};

int main(void)
{
    // https://assets.leetcode.com/users/images/82448a74-6e63-4981-bd93-68915b47536d_1637542697.778318.png
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);

    Solution obj;
    TreeNode *res = obj.deleteNode(root, 5);

    cout << endl;
    obj.printTheList(res);

    return 0;
}
