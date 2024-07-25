#include <bits/stdc++.h>
using namespace std;

// create a TreeNode class
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int _v)
    {
        val = _v;
    }
};

class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> res;

        if (!root)
            return res; // Check for empty tree

        queue<pair<TreeNode *, pair<int, vector<int>>>> q;

        q.push({root, {root->val, {root->val}}});

        while (!q.empty())
        {

            pair<TreeNode *, pair<int, vector<int>>> temp = q.front();

            // get the front most node from queue
            TreeNode *node = temp.first;

            // get total sum of that element
            int totalSum = temp.second.first;

            // removed from queue
            q.pop();

            if (!node->left && !node->right && totalSum == targetSum)
            {
                res.push_back(temp.second.second);
            }

            if (node->left)
            {
                // get the path list from queue
                vector<int> list{temp.second.second.begin(), temp.second.second.end()};

                list.push_back(node->left->val);
                q.push({node->left, {node->left->val + totalSum, list}});
            }

            if (node->right)
            {
                // get the path list from queue
                vector<int> list{temp.second.second.begin(), temp.second.second.end()};

                list.push_back(node->right->val);
                q.push({node->right, {node->right->val + totalSum, list}});
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(5);

    // for depth 1
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    // for depth 2 left child
    root->left->left = new TreeNode(11);

    // for depth 2 right child
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    // for depth 3 root->left child
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    // for depth 3 root->right child
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    vector<vector<int>> res = obj.pathSum(root, 22);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";

        cout << endl;
    }

    return 0;
}