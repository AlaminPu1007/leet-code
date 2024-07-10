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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        if (root == NULL)
            return {""};

        vector<string> res;

        DFS(root, res, "");

        return res;
    }

private:
    void DFS(TreeNode *root, vector<string> &res, string s)
    {
        if (root == NULL)
            return;

        if (s.empty())
            s += to_string(root->val);
        else
            s += "->" + to_string(root->val);

        if (root->left == NULL && root->right == NULL)
            res.push_back(s);

        DFS(root->left, res, s);
        DFS(root->right, res, s);
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
    vector<string> res = obj.binaryTreePaths(root);

    for (auto item : res)
    {
        cout << item << " " << endl;
    }

    return 0;
}
