#include <bits/stdc++.h>
using namespace std;

class FindElements
{
    unordered_map<int, int> Map;

public:
    FindElements(TreeNode *root)
    {
        DFS(root, 0);
    }

    bool find(int target)
    {
        if (Map.find(target) != Map.end())
            return true;

        return false;
    }

private:
    void DFS(TreeNode *root, int x)
    {
        if (!root)
            return;

        root->val = x;
        // insert into hash-map
        Map[x]++;

        // called left child
        DFS(root->left, 2 * x + 1);

        // called right child
        DFS(root->right, 2 * x + 2);
    }
};