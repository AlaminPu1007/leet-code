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
    int maxPathSum(TreeNode *root)
    {
        // answer could be negative, wo we put INT_MIN instead of 0
        int maxSum = INT_MIN;
        DFS(root, maxSum);
        return maxSum;
    }

private:
    int DFS(TreeNode *root, int &maxNum)
    {
        if (root == NULL)
            return 0;

        // get left height
        // get maximum value of left, because it could be negative value,(Note: we will avoid negative value)
        int lh = max(0, DFS(root->left, maxNum));

        // get right height
        // get maximum value of right, because it could be negative value,(Note: we will avoid negative value)
        int rh = max(0, DFS(root->right, maxNum));

        maxNum = max(maxNum, (root->val + lh + rh));

        return root->val + max(lh, rh);
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
    cout << obj.maxPathSum(root) << endl;

    return 0;
}
