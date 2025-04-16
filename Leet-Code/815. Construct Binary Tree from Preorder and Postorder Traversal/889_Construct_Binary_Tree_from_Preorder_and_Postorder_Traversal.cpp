#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        // both array will have the same length
        int n = preorder.size();

        unordered_map<int, int> postMap;

        // keep track of each item index to get the boundary
        // while we create a tree
        for (int i = 0; i < n; i++)
            postMap[postorder[i]] = i;

        return constructTree(0, n - 1, 0, n - 1, preorder, postorder, postMap);
    }

private:
    TreeNode *constructTree(int i1, int i2, int j1, int j2, vector<int> &preorder, vector<int> &postorder, unordered_map<int, int> &postMap)
    {
        if (i1 > i2 || j1 > j2)
            return NULL;

        // initialized a node
        TreeNode *node = new TreeNode(preorder[i1]);

        // have the pointer have grater than length one value
        if (i1 != i2)
        {
            // get left node value
            int leftNodeValue = preorder[i1 + 1];

            // get the ending boundary of left end
            // can treat it as a mid
            int mid = postMap[leftNodeValue];

            // get the size of the left subtree
            // due to zero baseindex add a offset +1
            int leftSize = mid - j1 + 1;

            node->left = constructTree(i1 + 1, i1 + leftSize, j1, mid, preorder, postorder, postMap);
            node->right = constructTree(i1 + leftSize + 1, i2, mid + 1, j2 - 1, preorder, postorder, postMap);
        }

        return node;
    }
};

int main(void)
{
    Solution obj;
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7}, postorder = {4, 5, 2, 6, 7, 3, 1};

    TreeNode *res = obj.constructFromPrePost(preorder, postorder);

    return 0;
}