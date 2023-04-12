#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> iPair;
class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<int> distance(n, INT_MAX);
        vector<pair<int, int>> adj[n];

        queue<iPair> q;

        // make an adjacency list of each node
        for (auto item : flights)
            adj[item[0]].push_back({item[1], item[2]});

        // queue will hold {steps, {node, cost}}
        q.push({0, {src, 0}});
        distance[src] = 0;

        while (!q.empty())
        {
            int steps = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;

            q.pop();

            if (steps > k)
                continue;

            for (auto item : adj[node])
            {
                if (item.second + cost < distance[item.first] && steps <= k)
                {
                    distance[item.first] = item.second + cost;
                    q.push({steps + 1, {item.first, item.second + cost}});
                }
            }
        }

        if (distance[dst] == INT_MAX)
            distance[dst] = -1;

        return distance[dst];
    }
};

int main(void)
{
    Solution obj;
    int src = 0, dst = 3, k = 1, n = 4;
    vector<vector<int>> flights = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1, 3, 600}, {2, 3, 200}};
    int res = obj.findCheapestPrice(n, flights, src, dst, k);
    cout << res << endl;
    return 0;
}