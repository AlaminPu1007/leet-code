#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;

public:
    int minCost(int n, vector<vector<int>> &edges)
    {
        vector<IPair> adj[n + 1];

        for (auto item : edges)
        {
            int u = item[0], v = item[1], w = item[2];

            adj[u].push_back({v, w});
            adj[v].push_back({u, 2 * w});
        }

        vector<int> dis(n, INT_MAX);
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;
        pq.push({0, 0}); // {dis, node}
        dis[0] = 0;

        while (pq.size())
        {
            auto [d, u] = pq.top();

            // removed top item
            pq.pop();

            if (u == n - 1)
                return d;

            // if queue has: {(3, 2), (5, 2)} {W, NODE}
            // we only care about lowest value
            if (d != dis[u]) // Stale edge // ex: 3 != dis[2] must be grater then existing, so ignore
                continue;

            // traverse the adjacency lists
            for (auto [v, w] : adj[u])
            {
                if (dis[v] > dis[u] + w)
                {
                    dis[v] = dis[u] + w;
                    pq.push({dis[v], v});
                }
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 1, 3}, {3, 1, 1}, {2, 3, 4}, {0, 2, 2}};
    int n = 4;

    cout << obj.minCost(n, edges) << endl;

    return 0;
}