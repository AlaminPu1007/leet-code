
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

        DFS(root, res);

        return res;
    }

private:
    void DFS(TreeNode *root, vector<int> &res)
    {
        if (root == NULL)
            return;

        DFS(root->left, res);

        res.push_back(root->val);

        DFS(root->right, res);
    }
};

int main(void)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;
    vector<int> res = obj.inorderTraversal(root);

    for (auto item : res)
        cout << item << " ";

    return 0;
}
