#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestValues(TreeNode *root)
    {
        vector<int> res;

        if (!root)
            return res;

        queue<TreeNode *> q;
        q.push(root);

        while (q.size())
        {
            int n = q.size();
            int max_val = INT_MIN;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);

                max_val = max(max_val, node->val);
            }

            res.push_back(max_val);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    return 0;
}