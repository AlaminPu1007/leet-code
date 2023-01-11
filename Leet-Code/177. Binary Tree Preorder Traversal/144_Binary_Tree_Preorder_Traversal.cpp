#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> res;
    // DFS to visit tree with pre-order mood
    void DFS_TREE(TreeNode *node)
    {
        if (node == nullptr)
            return;

        // store visited data
        res.push_back(node->val);

        // Visit the root first, then the left subtree, then the right subtree.
        DFS_TREE(node->left);
        DFS_TREE(node->right);
    };
    vector<int> preorderTraversal(TreeNode *root)
    {
        DFS_TREE(root);
        return res;
    };
};

int main(void)
{
    Solution obj;
    TreeNode *node;
    // obj.preorderTraversal(node);
    return 0;
}