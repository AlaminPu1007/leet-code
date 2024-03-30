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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> res;
        // inner map will hold (level, multiset of node)
        map<int, map<int, multiset<int>>> Map;
        queue<pair<TreeNode *, pair<int, int>>> todo;

        // put source node into queue
        // for -> (node, vertical, level) as a value
        todo.push({root, {0, 0}});

        while (!todo.empty())
        {
            auto item = todo.front();

            // pop element from queue
            todo.pop();

            TreeNode *node = item.first;

            // get the vertical align
            int x = item.second.first;

            // get the level align
            int y = item.second.second;

            // put node->val into map as a answer
            Map[x][y].insert(node->val);

            // if left item is present
            if (node->left)
            {
                todo.push({node->left, {x - 1, y + 1}});
            }

            // if right node is exists
            if (node->right)
            {
                todo.push({node->right, {x + 1, y + 1}});
            }
        }

        // iterate over the root->map
        for (auto item : Map)
        {
            vector<int> list;

            // iterate over the inner->map
            // it.second will be out multiset
            for (auto it : item.second)
            {
                for (auto i : it.second)
                    list.push_back(i);
            }

            res.push_back(list);
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

    vector<vector<int>> res = obj.verticalTraversal(root);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";

        cout << endl;
    }

    return 0;
}
