
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
    int amountOfTime(TreeNode *root, int start)
    {

        unordered_map<int, vector<int>> adj;

        convertIntoDirectedGraph(root, -1, adj);

        // print adjacency list of given graph
        // for (auto item : adj)
        // {
        //     cout << item.first << " -> ";
        //     for (auto it : item.second)
        //         cout << it << " ";
        //     cout << endl;
        // }

        unordered_set<int> vis;
        vis.insert(start);

        queue<int> q;
        q.push(start);

        int res = 0;

        while (!q.empty())
        {
            int n = q.size();

            for (int i = 0; i < n; i++)
            {
                int node = q.front();
                q.pop();

                // Traverse all adjacency node of node
                for (auto adjNode : adj[node])
                {
                    if (vis.find(adjNode) == vis.end())
                    {
                        q.push(adjNode);
                        vis.insert(adjNode);
                    }
                }
            }
            res++;
        }

        return res - 1;
    }

private:
    void convertIntoDirectedGraph(TreeNode *root, int parent, unordered_map<int, vector<int>> &adj)
    {
        if (root == NULL)
            return;

        // connect with parent node
        if (parent != -1)
        {
            adj[root->val].push_back(parent);
        }

        if (root->left)
            adj[root->val].push_back(root->left->val);

        if (root->right)
            adj[root->val].push_back(root->right->val);

        convertIntoDirectedGraph(root->left, root->val, adj);
        convertIntoDirectedGraph(root->right, root->val, adj);
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
    cout << obj.amountOfTime(root, 3) << endl;

    return 0;
}
