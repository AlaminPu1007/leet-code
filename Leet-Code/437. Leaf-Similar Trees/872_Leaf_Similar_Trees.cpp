
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
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> res1, res2;
        DFS(root1, res1);
        DFS(root2, res2);

        if (res1.size() != res2.size())
            return false;

        for (int i = 0; i < res1.size(); i++)
            if (res1[i] != res2[i])
                return false;

        return true;
    }

private:
    void DFS(TreeNode *root, vector<int> &res)
    {
        if (root == NULL)
            return;

        DFS(root->left, res);

        if (root->left == NULL && root->right == NULL)
            res.push_back(root->val);

        DFS(root->right, res);
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

    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(5);

    root2->right->left = new TreeNode(6);
    root2->right->right = new TreeNode(7);

    Solution obj;
    cout << obj.leafSimilar(root, root2) << endl;

    return 0;
}
