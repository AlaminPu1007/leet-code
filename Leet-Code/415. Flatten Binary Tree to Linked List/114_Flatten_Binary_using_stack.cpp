
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
    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        stack<TreeNode *> st;
        st.push(root);

        while (!st.empty())
        {
            TreeNode *node = st.top();
            st.pop();

            if (node->right)
                st.push(node->right);

            if (node->left)
                st.push(node->left);

            if (!st.empty())
                node->right = st.top();

            node->left = NULL;
        }
    }

    void printTheList(TreeNode *root)
    {
        if (root == NULL)
            return;

        cout << root->val << " ";

        printTheList(root->right);
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
    obj.flatten(root);

    obj.printTheList(root);

    return 0;
}
