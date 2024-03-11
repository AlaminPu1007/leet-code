
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
    int ans = 0;
    int maxAncestorDiff(TreeNode *root)
    {
        if (root == NULL)
            return -1;

        int maxValue = root->val, minValue = root->val;

        DFS(root, maxValue, minValue);
        return ans;
    }

private:
    void DFS(TreeNode *root, int maxValue, int minValue)
    {
        if (root == NULL)
        {
            ans = max(ans, abs(maxValue - minValue));
            return;
        }

        maxValue = max(maxValue, root->val);
        minValue = min(minValue, root->val);

        DFS(root->left, maxValue, minValue);
        DFS(root->right, maxValue, minValue);
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
    cout << obj.maxAncestorDiff(root) << endl;

    return 0;
}
