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
    int minimumOperations(TreeNode *root)
    {
        int res = 0;

        queue<TreeNode *> q;
        q.push(root);

        while (q.size())
        {
            int n = q.size();

            vector<int> lists, sortedLists;

            unordered_map<int, int> Map;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                lists.push_back(node->val);
                sortedLists.push_back(node->val);

                Map[node->val] = i;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            // sort the lists
            sort(sortedLists.begin(), sortedLists.end());

            int m = sortedLists.size();

            for (int i = 0; i < m; i++)
            {
                if (lists[i] != sortedLists[i])
                {
                    // get actual index
                    int idx = Map[sortedLists[i]];

                    // before swap, updated their positions
                    Map[lists[i]] = idx;

                    // swap the value
                    swap(lists[i], lists[idx]);

                    res++;
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(4);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(6);

    root->right->left = new TreeNode(8);
    root->right->right = new TreeNode(5);

    root->right->left->left = new TreeNode(9);
    root->right->right->left = new TreeNode(10);

    cout << obj.minimumOperations(root) << endl;

    return 0;
}