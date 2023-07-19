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
    int maxLevelSum(TreeNode *root)
    {
        int maxSum = INT_MIN;
        int level = 0, ans = 0;

        // define an queue data-structure
        queue<TreeNode *> q;
        // insert root into queue
        q.push(root);

        while (!q.empty())
        {
            int count = q.size();
            int levelSum = 0;
            // count the level
            level++;

            while (count--)
            {
                TreeNode *node = q.front();
                levelSum += node->val;

                // remove node from queue
                q.pop();

                // insert left item of tree in queue
                if (node->left != NULL)
                {
                    q.push(node->left);
                }

                // insert left item of tree in queue
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
            }

            if (maxSum < levelSum)
            {
                maxSum = levelSum;
                ans = level;
            }
        }
        return ans;
    }
};