/**
 * Need to submit this in Geek-for-geeks
 * https://www.geeksforgeeks.org/problems/floor-in-bst/1
 */
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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return new TreeNode(val);

        TreeNode *head = root;

        while (true)
        {
            if (root->val <= val)
            {
                if (root->right != NULL)
                {
                    root = root->right;
                }
                else
                {
                    root->right = new TreeNode(val);
                    break;
                }
            }
            else
            {
                if (root->left != NULL)
                {
                    root = root->left;
                }
                else
                {
                    root->left = new TreeNode(val);
                    break;
                }
            }
        }

        return head;
    }
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
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);

    Solution obj;
    TreeNode *res = obj.insertIntoBST(root, 7);

    cout << endl;
    obj.printTheList(res);

    return 0;
}
