#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> findMode(TreeNode *root)
    {
        unordered_map<int, int> Map;
        vector<int> ans;

        DFS_METHOD(root, Map);

        int maxElement = 0;

        for (auto item : Map)

            maxElement = max(maxElement, item.second);

        for (auto item : Map)

            if (maxElement == item.second)
                ans.push_back(item.first);

        return ans;
    }

private:
    void DFS_METHOD(TreeNode *node, unordered_map<int, int> &Map)
    {
        if (node == NULL)
            return;

        // store value into hash-map
        Map[node->val]++;

        // called for left node
        DFS_METHOD(node->left, Map);
        DFS_METHOD(node->right, Map);
    }
};

int main(void)
{
    Solution obj;

    return 0;
}