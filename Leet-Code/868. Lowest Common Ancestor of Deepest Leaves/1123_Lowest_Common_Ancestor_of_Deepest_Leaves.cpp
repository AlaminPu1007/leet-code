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
        left = NULL;
        right = NULL;
        val = _v;
    }
};

class Solution
{
public:
    TreeNode *lcaDeepestLeaves(TreeNode *root)
    {
        return DFS(root).first;
    }

private:
    pair<TreeNode *, int> DFS(TreeNode *root)
    {
        if (!root)
            return {NULL, 1};

        auto left = DFS(root->left);
        auto right = DFS(root->right);

        if (left.second > right.second)
            return {left.first, left.second + 1};

        if (left.second < right.second)
            return {right.first, right.second + 1};

        return {root, left.second + 1};
    }
};

int main(void)
{
    Solution obj;

    return 0;
}