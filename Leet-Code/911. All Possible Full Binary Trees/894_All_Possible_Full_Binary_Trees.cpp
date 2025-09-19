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
    vector<TreeNode *> allPossibleFBT(int n)
    {
        unordered_map<int, vector<TreeNode *>> Map;
        return Solved(n, Map);
    }

private:
    vector<TreeNode *> Solved(int n, unordered_map<int, vector<TreeNode *>> &Map)
    {
        if (n % 2 == 0)
            return {};

        if (n == 1)
        {
            TreeNode *node = new TreeNode(0);
            return {node};
        }

        if (Map.find(n) != Map.end())
            return Map[n];

        vector<TreeNode *> res;

        for (int i = 1; i < n; i += 2)
        {
            vector<TreeNode *> l = Solved(i, Map);
            vector<TreeNode *> r = Solved(n - i - 1, Map);

            for (auto &leftItem : l)
            {
                for (auto &rightItem : r)
                {
                    TreeNode *root = new TreeNode(0);
                    root->left = leftItem;
                    root->right = rightItem;

                    // store result in treenode array
                    res.push_back(root);
                }
            }
        }

        return Map[n] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<TreeNode *> res = obj.allPossibleFBT(7);

    return 0;
}