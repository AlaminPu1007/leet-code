#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans = INT_MAX;
    int findShortestCycle(int n, vector<vector<int>> &edges)
    {

        vector<int> adj[n + 1];
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
        {
            BFS(i, n, adj);
        }
        return ans == INT_MAX ? -1 : ans;
    }

private:
    void BFS(int src, int n, vector<int> adj[])
    {
        // define an queue with pair, which hold to node with it's parent
        // -1 means it has no parent, starting node
        queue<pair<int, int>> q;
        q.push({src, -1});

        // define distance array
        vector<int> dst(n, -1);
        dst[src] = 0;

        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;

            // removed it from queue
            q.pop();

            // get adjacency list of given node
            for (auto adjNode : adj[node])
            {
                if (dst[adjNode] == -1)
                {
                    dst[adjNode] = dst[node] + 1;
                    q.push({adjNode, node});
                }
                // if adjacent node is visited and is not it's own parent node
                else if (parent != adjNode)
                {
                    ans = min(ans, dst[node] + dst[adjNode] + 1);
                }
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {3, 4}, {4, 5}, {5, 6}, {6, 3}};
    cout << obj.findShortestCycle(7, edges) << endl;
    return 0;
}