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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> res;
        DFS(root, res, 0);
        return res;
    }

private:
    void DFS(TreeNode *root, vector<int> &res, int l)
    {
        if (root == NULL)
            return;

        if (res.size() <= l)
            res.push_back(root->val);

        DFS(root->right, res, l + 1);
        DFS(root->left, res, l + 1);
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
    vector<int> res = obj.rightSideView(root);

    for (auto item : res)
    {
        cout << item << " ";
    }

    return 0;
}
