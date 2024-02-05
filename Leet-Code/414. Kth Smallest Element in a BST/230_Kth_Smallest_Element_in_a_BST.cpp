
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
    int counter = 0;

    int kthSmallest(TreeNode *root, int k)
    {
        if (root == NULL)
            return -1;

        int ans = -1;

        DFS(root, k, ans);

        return ans;
    }

private:
    void DFS(TreeNode *root, int k, int &ans)
    {
        if (root == NULL)
            return;

        DFS(root->left, k, ans);

        counter++;

        if (k == counter)
        {
            ans = root->val;
            return;
        }

        DFS(root->right, k, ans);
    }
};

int main(void)
{
    // https://assets.leetcode.com/users/images/82448a74-6e63-4981-bd93-68915b47536d_1637542697.778318.png
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);

    Solution obj;
    cout << obj.kthSmallest(root, 2) << endl;

    return 0;
}
