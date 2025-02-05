#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>> &queries)
    {
        vector<int> adj[n + 1];
        vector<int> res;

        // create a adjacency list
        for (int i = 0; i < n - 1; i++)
            adj[i].push_back(i + 1);

        for (auto item : queries)
        {
            int u = item[0];
            int v = item[1];

            // create a adjacency list of each query
            adj[u].push_back(v);

            res.push_back(shortestPathBfs(adj, n));
        }

        return res;
    }

private:
    int shortestPathBfs(vector<int> adj[], int n)
    {
        vector<int> vis(n + 1, 0);

        //  queue will hold {node, level}
        queue<pair<int, int>> q;

        // insert initial node into queue
        q.push({0, 0});
        // mark as visited also
        vis[0] = 1;

        while (!q.empty())
        {
            int node = q.front().first;
            int lev = q.front().second;

            // removed into queue
            q.pop();

            if (node == n - 1)
            {
                return lev;
            }

            // iterate over the adjacency list of current node
            for (auto adjNode : adj[node])
            {
                if (!vis[adjNode])
                {
                    vis[adjNode] = 1;
                    q.push({adjNode, lev + 1});
                }
            }
        }
        return 0;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> queries = {{2, 4}, {0, 2}, {0, 4}};

    vector<int> res = obj.shortestDistanceAfterQueries(5, queries);

    for (auto item : res)
        cout << item << " ";

    return 0;
}