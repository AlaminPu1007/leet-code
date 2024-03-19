
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
    int pseudoPalindromicPaths(TreeNode *root)
    {
        int res = 0;
        unordered_map<int, int> freq;
        DFS(root, res, freq);
        return res;
    }

private:
    void DFS(TreeNode *root, int &res, unordered_map<int, int> &freq)
    {
        if (root == NULL)
            return;

        // count frequency of each number
        freq[root->val]++;

        // if we reached to leaf node
        if (root->left == NULL && root->right == NULL)
            if (countOddNumber(freq))
                res++;

        DFS(root->left, res, freq);
        DFS(root->right, res, freq);

        // decrement element from backtracking
        freq[root->val]--;

        if (freq[root->val] == 0)
            freq.erase(root->val);
    }

private:
    bool countOddNumber(unordered_map<int, int> &freq)
    {
        int oddCount = 0;
        for (auto item : freq)
        {
            if (item.second % 2 == 1)
            {
                oddCount++;
                if (oddCount > 1)
                {
                    return false;
                }
            }
        }
        return true;
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
    cout << obj.pseudoPalindromicPaths(root) << endl;

    return 0;
}
