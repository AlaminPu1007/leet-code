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
    int MAX_DISTANCE = 10;

public:
    int countPairs(TreeNode *root, int distance)
    {
        int ans = 0;

        // perform a post-order traversal using DFS
        DFS(root, distance, ans);

        // to remove the duplicate pairs
        return ans;
    }

private:
    vector<int> DFS(TreeNode *root, int distance, int &ans)
    {
        // handle the base case
        if (!root)
            return {};

        // store all leaf nodes
        if (!root->left && !root->right)
            return {1};

        // called left child
        vector<int> left_list = DFS(root->left, distance, ans);

        // called right child
        vector<int> right_list = DFS(root->right, distance, ans);

        // calculate the valid paris
        for (auto left : left_list)
        {
            for (auto right : right_list)
            {
                if (left + right <= distance)
                    ans++;
            }
        }

        vector<int> all_dist;

        for (int d : left_list)
            all_dist.push_back(d + 1);

        for (int d : right_list)
            all_dist.push_back(d + 1);

        return all_dist;
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(1);
    // level one
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // level two of left child
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // level two of right child
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << obj.countPairs(root, 3) << endl;

    return 0;
}