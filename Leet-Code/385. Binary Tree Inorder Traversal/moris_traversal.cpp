
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> res;

        TreeNode *cur = root;
        while (cur != NULL)
        {
            if (cur->left == NULL)
            {
                res.push_back(cur->val);
                cur = cur->right;
            }
            else
            {
                TreeNode *leftChild = cur->left;
                while (leftChild->right != NULL)
                {
                    leftChild = leftChild->right;
                }

                // connected with root node by thread
                leftChild->right = cur;

                // make a copy of cur node
                TreeNode *temp = cur;

                // update cur with it's left-child
                cur = cur->left;

                // now destroy connection between cur to cur->left
                temp->left = NULL;
            }
        }

        return res;
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
    vector<int> res = obj.inorderTraversal(root);

    for (auto item : res)
    {
        cout << item << " ";
    }

    return 0;
}
