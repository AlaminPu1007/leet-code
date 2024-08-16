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
        left = right = NULL;
    }
};

class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        // define a adjacency list
        unordered_map<TreeNode *, vector<TreeNode *>> adj;

        // define a set to hold all the leaf node
        unordered_set<TreeNode *> leafNodes;

        // called a DFS (pre-order traversal technique) approach to create adjacency graph
        makeGraphOfAdjacencyList(root, NULL, leafNodes, adj);

        int count = 0;

        // iterate over all the leaf nodes and get good pairs
        // we will perform a BFS traversal to visit it's neighbors
        for (auto node : leafNodes)
        {
            // define a queue
            queue<TreeNode *> q;
            unordered_set<TreeNode *> visit;

            // insert first node into queue
            q.push(node);

            // mark it as visited node
            visit.insert(node);

            // do traversal until level become larger than distance
            // little optimization
            for (int level = 0; level <= distance; level++)
            {
                int n = q.size();
                while (n--)
                {
                    TreeNode *curNode = q.front();
                    // remove it from queue
                    q.pop();

                    // check valid pairs
                    if (curNode != node && leafNodes.count(curNode))
                        count++;

                    // iterate over the all adjacency node of node(parent node)
                    for (auto adjNode : adj[curNode])
                    {
                        // insert only valid leaf node
                        if (!visit.count(adjNode))
                        {
                            q.push(adjNode);
                            visit.insert(adjNode);
                        }
                    }
                }
            }
        }

        // to remove the duplicate pairs
        return (count / 2);
    }

private:
    void makeGraphOfAdjacencyList(TreeNode *root, TreeNode *previous, unordered_set<TreeNode *> &leafNodes, unordered_map<TreeNode *, vector<TreeNode *>> &adj)
    {
        // handle the base case
        if (!root)
            return;

        // store all leaf nodes
        if (!root->left && !root->right)
            leafNodes.insert(root);

        // create adjacency list
        // created a undirected graph
        if (previous != NULL)
        {
            adj[previous].push_back(root);
            adj[root].push_back(previous);
        }

        // called DFS with left child
        makeGraphOfAdjacencyList(root->left, root, leafNodes, adj);

        // called DFS with right child
        makeGraphOfAdjacencyList(root->right, root, leafNodes, adj);
    }
};

int main(void)
{
    Solution obj;

    TreeNode *root = new TreeNode(1);
    // level one
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // level two of left child
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // level two of right child
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << obj.countPairs(root, 3) << endl;

    return 0;
}