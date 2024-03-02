
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
    TreeNode *DFS(vector<int> &arr, int &index, int bound)
    {
        // define base case
        if ((arr.size() == index) || (arr[index] > bound))
            return NULL;

        TreeNode *root = new TreeNode(arr[index++]);

        // current arr element will be our max-bound
        root->left = DFS(arr, index, root->val); // using arr[index] may cause to overflow the index value

        // right always have to be lees than bound
        root->right = DFS(arr, index, bound);

        return root;
    }

public:
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        if (!preorder.size())
            return NULL;
        int i = 0;

        return DFS(preorder, i, INT_MAX);
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {8, 5, 1, 7, 10, 12};

    TreeNode *res = obj.bstFromPreorder(arr);

    return 0;
}
