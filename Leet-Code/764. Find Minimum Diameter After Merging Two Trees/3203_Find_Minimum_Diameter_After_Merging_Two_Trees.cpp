#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDiameterAfterMerge(vector<vector<int>> &edges1, vector<vector<int>> &edges2)
    {
        // get each tree nodes size
        int n = edges1.size() + 1;
        int m = edges2.size() + 1;

        vector<vector<int>> adj1 = get_adjacencyList(edges1, n);
        vector<vector<int>> adj2 = get_adjacencyList(edges2, m);

        int diameter1 = findDiameter(0, -1, adj1).first;
        int diameter2 = findDiameter(0, -1, adj2).first;

        int res = max(diameter1, diameter2);

        // Calculate the diameter of the combined tree
        // This accounts for the longest path spanning both trees
        int combinedDiameter =
            ceil(diameter1 / 2.0) + ceil(diameter2 / 2.0) + 1;

        // Return the maximum diameter among the two trees and the combined tree
        return max(combinedDiameter, res);
    }

private:
    pair<int, int> findDiameter(int node, int parent, vector<vector<int>> &adj)
    {
        int maxDepth1 = 0, maxDepth2 = 0;
        int diameter = 0;

        for (auto nei : adj[node])
        {
            if (nei == parent)
                continue;

            // calculate the diameter and depth of the neighbor's subtree
            auto [childDiameter, depth] = findDiameter(nei, node, adj);

            diameter = max(diameter, childDiameter);

            // increment depth size
            depth++;

            // Update the two largest depths from the current node
            if (depth > maxDepth1)
            {
                maxDepth2 = maxDepth1;
                maxDepth1 = depth;
            }
            else if (depth > maxDepth2)
            {
                maxDepth2 = depth;
            }
        }

        // Update the diameter to include the path through the current node
        diameter = max(diameter, maxDepth1 + maxDepth2);

        return {diameter, maxDepth1};
    }

private:
    vector<vector<int>> get_adjacencyList(vector<vector<int>> &edges, int node_size)
    {
        vector<vector<int>> adj(node_size);

        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];

            // create a undirected graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return adj;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> edges1 = {{0, 1}, {0, 2}, {0, 3}, {2, 4}, {2, 5}, {3, 6}, {2, 7}};
    vector<vector<int>> edges2 = {{0, 1}, {0, 2}, {0, 3}, {2, 4}, {2, 5}, {3, 6}, {2, 7}};

    cout << obj.minimumDiameterAfterMerge(edges1, edges2) << endl;

    return 0;
}