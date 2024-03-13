
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

class BSTIterator
{
private:
    stack<TreeNode *> st;

public:
    BSTIterator(TreeNode *root)
    {
        pushLeftElement(root);
    }

    int next()
    {
        TreeNode *top = st.top();
        st.pop();

        pushLeftElement(top->right);
        return top->val;
    }

    bool hasNext()
    {
        return !st.empty();
    }

    void pushLeftElement(TreeNode *node)
    {
        while (node != NULL)
        {
            st.push(node);

            node = node->left;
        }
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

    BSTIterator obj(root);

    obj.next();
    obj.hasNext();

    return 0;
}
