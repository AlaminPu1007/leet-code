
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
        left = right = NULL;
    }
};

class Solution
{
    long long MOD = 1e9 + 7;
    long long res = 0;

public:
    int maxProduct(TreeNode *root)
    {
        long long total_sum = totalSum(root);

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (!node)
                continue;

            long long cur = (total_sum - node->val) * node->val;
            res = max(res, cur);

            if (node->left)
                q.push(node->left);

            if (node->right)
                q.push(node->right);
        }

        return res % MOD;
    }

private:
    /**
     * Calculate total sum of given tree also update each subtree total sum value by replacing it's
     * original value
     */
    int totalSum(TreeNode *node)
    {
        if (!node)
            return 0;

        node->val += totalSum(node->left) + totalSum(node->right);
        return node->val;
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(1);

    // for level-> 1
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // for level-> 2
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);

    cout << obj.maxProduct(root) << endl;

    return 0;
}