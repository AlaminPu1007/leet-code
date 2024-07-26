#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *right;
    TreeNode *left;
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
    int distributeCoins(TreeNode *root)
    {
        DFS(root);
        return res;
    }

private:
    int res = 0;
    // the pair will hold {size, coins} of current node sub tree
    pair<int, int> DFS(TreeNode *root)
    {
        if (root == NULL)
            return {0, 0};

        pair<int, int> left_node = DFS(root->left);
        pair<int, int> right_node = DFS(root->right);

        int coins = root->val + left_node.second + right_node.second;
        int sizes = 1 + left_node.first + right_node.first;

        // cout << coins << " " << sizes << endl;
        /*  S, C // S -> size, C-> coin
            4, 1 // step-1
            0, 1 // step-2
            4, 3 ...
            4, 4 // step-n
        */

        // calculate the result
        res += abs(sizes - coins);
        return {sizes, coins};
    }
};

int main(void)
{
    Solution obj;

    // create tree
    TreeNode *root = new TreeNode(0);

    root->left = new TreeNode(0);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(0);

    cout << obj.distributeCoins(root) << endl;

    return 0;
}