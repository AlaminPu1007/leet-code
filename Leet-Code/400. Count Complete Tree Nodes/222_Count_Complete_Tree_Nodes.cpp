
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
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = measureLeftHeightOfGiventTree(root);
        int rh = measureRightHeightOfGiventTree(root);

        cout << lh << " " << rh << endl;

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

private:
    int measureLeftHeightOfGiventTree(TreeNode *node)
    {
        int height = 0;

        while (node != NULL)
        {
            node = node->left;
            height++;
        }

        return height;
    }

    int measureRightHeightOfGiventTree(TreeNode *node)
    {
        int height = 0;

        while (node != NULL)
        {
            node = node->right;
            height++;
        }

        return height;
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
    cout << obj.countNodes(root) << endl;

    return 0;
}
