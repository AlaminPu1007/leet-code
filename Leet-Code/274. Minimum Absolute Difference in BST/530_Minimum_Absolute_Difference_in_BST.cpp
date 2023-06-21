/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> value;
    int getMinimumDifference(TreeNode *root)
    {
        int res = INT_MAX;
        // called DFS method to traverse tree
        DFS(root);

        // sort array
        sort(value.begin(), value.end());
        int len = value.size();
        for (int i = 1; i < len; i++)
        {
            res = min(res, value[i] - value[i - 1]);
        }

        return res;
    }

private:
    void DFS(TreeNode *root)
    {
        if (root == NULL)
            return;

        value.push_back(root->val);

        // called left portion of tree
        DFS(root->left);
        // called right portion of tree
        DFS(root->right);
    }
};