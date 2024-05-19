#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int _v)
    {
        val = _v;
        right = NULL;
        left = NULL;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {

        if (!root)
            return {};

        vector<vector<int>> res;
        queue<TreeNode *> q;

        q.push(root);
        while (!q.empty())
        {
            int n = q.size();

            vector<int> level;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
            res.push_back(level);
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> res = obj.levelOrderBottom(root);

    for (auto item : res)
    {
        for (auto i : item)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}