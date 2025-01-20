#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
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
    int height[1000001];
    int levels[1000001];
    int firstMaxHeight[1000001];
    int secondMaxHeight[1000001];

public:
    vector<int> treeQueries(TreeNode *root, vector<int> &queries)
    {

        vector<int> res;

        DFS(root, 0);

        for (int &node : queries)
        {
            int L = levels[node];
            int temp = L + (firstMaxHeight[L] == height[node] ? secondMaxHeight[L] : firstMaxHeight[L]) - 1;
            res.push_back(temp);
        }

        return res;
    }

private:
    int DFS(TreeNode *root, int i)
    {
        if (!root)
            return 0;

        // store current level
        levels[root->val] = i;

        height[root->val] = 1 + max(DFS(root->left, i + 1), DFS(root->right, i + 1));

        if (firstMaxHeight[i] < height[root->val])
        {
            secondMaxHeight[i] = firstMaxHeight[i];
            firstMaxHeight[i] = height[root->val];
        }

        else if (secondMaxHeight[i] < height[root->val])
            secondMaxHeight[i] = height[root->val];

        return height[root->val];
    }
};

int main(void)
{
    Solution obj;
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(4);

    root->left->left = new TreeNode(2);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(5);

    root->right->right->right = new TreeNode(7);

    vector<int> queries = {4};
    vector<int> res = obj.treeQueries(root, queries);

    for (auto item : res)
        cout << item << " ";

    return 0;
}
