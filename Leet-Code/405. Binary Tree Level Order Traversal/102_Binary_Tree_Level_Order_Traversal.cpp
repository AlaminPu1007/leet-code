
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;

        if (root == NULL)
            return res;

        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty())
        {
            // get size from queue
            int size = q.size();

            // initialize ans vector
            vector<int> ans;

            // now iterate over the same level and push their child node into queue
            // and store as well as our answer
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();

                // pop element from queue
                q.pop();

                ans.push_back(node->val);

                // put node left child into queue
                if (node->left)
                    q.push(node->left);

                // put node right child into queue
                if (node->right)
                    q.push(node->right);
            }
            res.push_back(ans);
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

    Solution obj;
    vector<vector<int>> res = obj.levelOrder(root);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
