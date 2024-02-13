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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        return DFS(root, p, q);
    }

private:
    TreeNode *DFS(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return NULL;

        if (root == p)
            return p;

        if (root == q)
            return q;

        TreeNode *leftPointer = DFS(root->left, p, q);
        TreeNode *rightPointer = DFS(root->right, p, q);

        if (leftPointer && rightPointer)
            return root;

        if (leftPointer == NULL && rightPointer)
            return rightPointer;

        if (leftPointer && rightPointer == NULL)
            return leftPointer;

        return NULL;
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
    TreeNode *ans = obj.lowestCommonAncestor(root, root->left->left, root->right->right);

    cout << "The answer is -> " << ans->val << endl;

    return 0;
}
