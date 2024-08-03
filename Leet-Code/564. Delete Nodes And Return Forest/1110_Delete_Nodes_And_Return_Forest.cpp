/*
    To solve this problem we will perform a postorder traversal technique.
*/

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
}

class Solution
{
public:
    vector<TreeNode *> delNodes(TreeNode *root, vector<int> &to_delete)
    {
        vector<TreeNode *> res;

        // convert to_delete array into set,
        // it will help us to find to_delete value with an `O(1)` amount of time
        unordered_set<int> st;

        for (auto item : to_delete)
            st.insert(item);

        // perform a post order traversal (using DFS)
        removedNodeToGetForest(root, st, res);

        // if root is not present into to_delete then add it into forest
        if (st.find(root->val) == st.end())
            res.push_back(root);

        return res;
    }
    // this method will help us to get forest after deletion specific node
private:
    TreeNode *removedNodeToGetForest(TreeNode *node, unordered_set<int> to_delete, vector<TreeNode *> &res)
    {
        // handle the base case
        if (!node)
            return NULL;

        // in post order traversal we always visit root node after completed traversing it's child

        // perform DFS for left child
        node->left = removedNodeToGetForest(node->left, to_delete, res);

        // perform DFS for right child
        node->right = removedNodeToGetForest(node->right, to_delete, res);

        // if current node is in the to_delete item then return NULL and delete this node
        if (to_delete.find(node->val) != to_delete.end())
        {

            // before removing node, get it's left/right child as a forest
            if (node->left)
                res.push_back(node->left);

            if (node->right)
                res.push_back(node->right);

            // from this, the root node get null fo it's left or right child
            return NULL;
        }

        // return current node itself
        return node;
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

    vector<int> to_delete = {3, 5};

    vector<TreeNode *> res = obj.delNodes(root, to_delete);

    return 0;
}