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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;

        if (root == NULL)
            return res;

        // define stack
        stack<TreeNode *> st;
        st.push(root);

        while (!st.empty())
        {
            TreeNode *node = st.top();
            st.pop();

            res.push_back(node->val);

            // push right value before left
            if (node->right)
                st.push(node->right);

            // push left value
            if (node->left)
                st.push(node->left);
        }

        return res;
    }
};

int main(void)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;
    vector<int> res = obj.preorderTraversal(root);

    for (auto item : res)
    {
        cout << item << " ";
    }

    return 0;
}
