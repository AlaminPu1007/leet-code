#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        vector<int> adj[n];
        vector<int> visited(n, false);
        int countCompleteGraph = 0;

        // create a adjacency list from given edges
        for (auto item : edges)
        {
            int u = item[0], v = item[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // iterate over the nodes and count complete graph
        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                continue;

            vector<int> nodes;
            Solved(i, adj, nodes, visited);

            bool flag = true;

            for (auto item : nodes)
            {
                if (nodes.size() - 1 != adj[item].size())
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                countCompleteGraph++;
        }

        return countCompleteGraph;
    }
    void Solved(int node, vector<int> adj[], vector<int> &nodes, vector<int> &visited)
    {
        // mark this node as a visited
        visited[node] = true;

        // store this node
        nodes.push_back(node);

        // iterate over the neighbour nodes
        for (auto nei : adj[node])
        {
            if (!visited[nei])
                Solved(nei, adj, nodes, visited);
        }
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};

    cout << obj.countCompleteComponents(n, edges) << endl;

    return 0;
}