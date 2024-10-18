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
    int widthOfBinaryTree(TreeNode *root)
    {
        int res = 0;

        // (node, index)
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int n = q.size();

            int x1 = 0, x2 = 0;

            for (int i = 0; i < n; i++)
            {
                auto item = q.front();
                q.pop();

                TreeNode *node = item.first;
                int index = item.second;

                if (i == 0)
                    x1 = index;

                if (i == n - 1)
                    x2 = index;

                // type case with long long to avoid  signed integer overflow: 2 * 1610612734
                if (node->left)
                    q.push({node->left, ((long long)2 * index + 1)});

                // type case with long long to avoid  signed integer overflow: 2 * 1610612734
                if (node->right)
                    q.push({node->right, ((long long)2 * index + 2)});
            }

            res = max(res, (x2 - x1 + 1));
        }

        return res;
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
    cout << obj.widthOfBinaryTree(root) << endl;

    return 0;
}
