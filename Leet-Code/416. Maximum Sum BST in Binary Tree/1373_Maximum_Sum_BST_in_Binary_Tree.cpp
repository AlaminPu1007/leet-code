
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

class NodeValue
{
public:
    int maxNode, minNode, maxSize, sum;
    NodeValue(int minNode, int maxNode, int maxSize, int sum)
    {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
        this->sum = sum;
    }
};

class Solution
{

private:
    NodeValue largestBSTSubTreeHelper(TreeNode *root, int &ans)
    {
        if (root == NULL)
            return NodeValue(INT_MAX, INT_MIN, 0, 0);

        // traverse the left subtree
        auto left = largestBSTSubTreeHelper(root->left, ans);
        auto right = largestBSTSubTreeHelper(root->right, ans);

        // do the business logic for current standing node

        // it it's a valid BST
        if ((left.maxNode < root->val) && (root->val < right.minNode))
        {
            // The `root` is a valid BST.
            const int sum = root->val + left.sum + right.sum;
            ans = max(ans, sum);

            return NodeValue(
                // get the minimal value for left
                min(root->val, left.minNode),
                // get the max value for left
                max(root->val, right.maxNode),
                // calculate the bst size
                (left.maxSize + right.maxSize + 1), sum);
        }

        // if it's not valid BST, then return larger value so that parent can't be valid BST
        return NodeValue(INT_MIN, INT_MAX, 0, 0);
    }

public:
    int maxSumBST(TreeNode *root)
    {
        int ans = 0;
        largestBSTSubTreeHelper(root, ans);
        return ans;
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
    cout << obj.maxSumBST(root) << endl;

    return 0;
}
