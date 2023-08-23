#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int time = 1;

private:
    void DFS(int node, int parent, vector<int> &vis, vector<int> adj[], vector<vector<int>> &res, int low[], int timeOfInsertion[])
    {
        // mark node as visited
        vis[node] = 1;

        // push time-of-insertion
        timeOfInsertion[node] = low[node] = time++;

        // traverse adjacency list of graph
        for (auto adjNode : adj[node])
        {
            // To avoid re-visiting the parent node from its child during the Depth-First Search traversal.
            if (adjNode == parent)
                continue;

            // if node is not visited yet
            if (!vis[adjNode])
            {
                DFS(adjNode, node, vis, adj, res, low, timeOfInsertion);

                // whenever the cover to visit their adjacency list and come back then
                low[node] = min(low[adjNode], low[node]);

                // check any bridge is exists
                if (low[adjNode] > timeOfInsertion[node])
                {
                    // bridge is found
                    res.push_back({node, adjNode});
                }
            }

            else
            {
                low[node] = min(low[adjNode], low[node]);
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<vector<int>> res;
        vector<int> list;
        vector<int> adj[n];
        vector<int> vis(n, 0);

        // making an adjacency list of graph
        for (auto item : connections)
        {
            adj[item[0]].push_back(item[1]);
            adj[item[1]].push_back(item[0]);
        }

        int low[n];
        // time of insertion of node
        int timeOfInsertion[n];

        // called dfs method
        DFS(0, -1, vis, adj, res, low, timeOfInsertion);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {1, 3}};
    vector<vector<int>> res = obj.criticalConnections(4, edges);
    for (auto item : res)
    {
        cout << item[0] << " " << item[1] << endl;
    }
    return 0;
}