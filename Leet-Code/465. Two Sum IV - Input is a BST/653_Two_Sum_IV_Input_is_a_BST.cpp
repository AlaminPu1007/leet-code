
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
    // true for before flat, ans false for next flag
    // before -> right pointer, next -> left pointer
    bool isReverse = true;

public:
    BSTIterator(TreeNode *root, bool reverseMode)
    {
        isReverse = reverseMode;
        pushLeftElement(root);
    }

    int next()
    {
        TreeNode *top = st.top();
        st.pop();

        if (isReverse == true)
            pushLeftElement(top->left);
        else
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

            if (isReverse == true)
                node = node->right;
            else
                node = node->left;
        }
    }
};

class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        if (root == NULL)
            return false;

        // initialize left pointer
        BSTIterator l(root, false);

        // initialize right pointer
        BSTIterator r(root, true);

        // get the first value from the left pointer
        int i = l.next();

        // get the first value from the right pointer
        int j = r.next();

        while (i < j)
        {
            int total = (i + j);

            if (total == k)
                return true;

            else if (total < k)
                i = l.next();
            else
                j = r.next();
        }

        return false;
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

    cout << obj.findTarget(root, 2) << endl;

    return 0;
}
