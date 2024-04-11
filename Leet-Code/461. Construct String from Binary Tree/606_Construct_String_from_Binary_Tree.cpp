
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
    string tree2str(TreeNode *root)
    {
        string ans = "";
        DFS(root, ans);
        return ans;
    }

private:
    void DFS(TreeNode *root, string &res)
    {
        if (root == NULL)
            return;

        res += to_string(root->val);

        if (root->left || root->right)
        {
            res += '(';
            DFS(root->left, res);
            res += ')';
        }

        if (root->right)
        {
            res += '(';
            DFS(root->right, res);
            res += ')';
        }
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

    string res = obj.tree2str(root);
    cout << res << " ";

    return 0;
}
