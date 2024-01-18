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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        if (root == NULL)
            return {};

        vector<vector<int>> res;

        queue<TreeNode *> q;
        q.push(root);

        int isLeftToRight = true;

        while (!q.empty())
        {
            int n = q.size();

            vector<int> row;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                // pop this element from queue
                q.pop();

                // find position to fill node value
                int indexToPush = isLeftToRight ? i : n - 1 - i;
                row[indexToPush] = node->val;

                // if left item is present
                if (node->left)
                    q.push(node->left);

                // if right item is present
                if (node->right)
                    q.push(node->right);
            }

            res.push_back(row);
            isLeftToRight = !isLeftToRight;
        }

        return res;
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

    Solution obj;
    vector<vector<int>> res = obj.zigzagLevelOrder(root);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
