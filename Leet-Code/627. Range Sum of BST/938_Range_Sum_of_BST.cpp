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
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int res = 0;
        DFS(root, low, high, res);
        return res;
    }

private:
    void DFS(TreeNode *root, int low, int high, int &res)
    {
        if (root == NULL)
            return;

        // for left child
        DFS(root->left, low, high, res);

        // for the right child
        DFS(root->right, low, high, res);

        if (root->val >= low && root->val <= high)
        {
            res += root->val;
        }

        return;
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
    cout << obj.rangeSumBST(root, 3, 5) << endl;

    return 0;
}
