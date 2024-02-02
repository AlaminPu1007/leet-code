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
    TreeNode *createNewTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &inMap)
    {
        // check boundary of given element
        if (preStart > preEnd || inStart > inEnd)
            return NULL;

        // create with root node
        TreeNode *root = new TreeNode(preorder[preStart]);

        // find root element index from in-order
        int inRoot = inMap[root->val];

        // find the no of element from in-order
        int numsLeft = inRoot - inStart;

        // create left node
        root->left = createNewTree(preorder, (preStart + 1), (preStart + numsLeft), inorder, inStart, inRoot - 1, inMap); // stop in-order before the root value (ex:inRoot - 1)

        // create right node
        root->right = createNewTree(preorder, (preStart + numsLeft + 1), preEnd, inorder, inRoot + 1, inEnd, inMap);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        // track the index of in-order element
        map<int, int> inMap;

        for (int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }

        int preStart = 0, preEnd = preorder.size() - 1, inStart = 0, inEnd = inorder.size() - 1;

        TreeNode *root = createNewTree(preorder, preStart, preEnd, inorder, inStart, inEnd, inMap);

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
    vector<int> preorder = {3, 9, 20, 15, 7}, inorder = {9, 3, 15, 20, 7};
    TreeNode *res = obj.buildTree(preorder, inorder);

    cout << endl;

    obj.DFS(res);

    return 0;
}
