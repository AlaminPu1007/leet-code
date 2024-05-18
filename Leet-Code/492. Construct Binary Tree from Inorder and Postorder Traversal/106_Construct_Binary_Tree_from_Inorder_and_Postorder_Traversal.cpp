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
private:
    TreeNode *createNewTree(vector<int> &postorder, int postStart, int postEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &inMap)
    {
        // check boundary of given element
        if (postStart > postEnd || inStart > inEnd)
            return NULL;

        // create with root node
        TreeNode *root = new TreeNode(postorder[postEnd]);

        // find root element index from in-order
        int inRoot = inMap[root->val];

        // find the no of element from in-order
        int numsLeft = inRoot - inStart;

        cout << inRoot << " " << numsLeft << endl;

        // create left node
        root->left = createNewTree(postorder, postStart, (postStart + numsLeft - 1), inorder, inStart, (inRoot - 1), inMap);

        // create right node
        root->right = createNewTree(postorder, (postStart + numsLeft), postEnd - 1, inorder, inRoot + 1, inEnd, inMap);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        if (inorder.size() != postorder.size())
            return NULL;

        // track the index of in-order element
        map<int, int> inMap;

        for (int i = 0; i < inorder.size(); i++)
            inMap[inorder[i]] = i;

        int postStart = 0, postEnd = postorder.size() - 1, inStart = 0, inEnd = inorder.size() - 1;

        TreeNode *root = createNewTree(postorder, postStart, postEnd, inorder, inStart, inEnd, inMap);

        return root;
    }

    // print result
    void DFS(TreeNode *node)
    {
        if (node == NULL)
            return;

        cout << node->val << " ";
        DFS(node->left);
        DFS(node->right);
    }
};

int main(void)
{
    Solution obj;
    vector<int> postorder = {9, 15, 7, 20, 3}, inorder = {9, 3, 15, 20, 7};
    TreeNode *res = obj.buildTree(inorder, postorder);

    cout << endl;

    obj.DFS(res);

    return 0;
}
