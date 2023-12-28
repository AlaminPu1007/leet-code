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
    int diameterOfBinaryTree(TreeNode *root)
    {
        int maxNum = 0;
        DFS(root, maxNum);
        return maxNum;
    }

private:
    int DFS(TreeNode *root, int &maxNum)
    {
        if (root == NULL)
            return 0;

        // get left height
        int lh = DFS(root->left, maxNum);

        // get right height
        int rh = DFS(root->right, maxNum);

        maxNum = max(maxNum, (lh + rh));

        return 1 + max(lh, rh);
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
    cout << obj.diameterOfBinaryTree(root) << endl;

    return 0;
}
