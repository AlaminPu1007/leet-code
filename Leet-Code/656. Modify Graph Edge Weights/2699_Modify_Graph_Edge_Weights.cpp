#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int INF = 2e9;
    typedef pair<int, int> IPair;

public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>> &edges, int source, int destination, int target)
    {
        vector<IPair> adj[n + 1];

        // create a adjacency list
        for (auto &item : edges)
        {
            if (item[2] != -1)
            {
                int u = item[0];
                int v = item[1];
                int w = item[2];

                adj[u].push_back({v, w});
                adj[v].push_back({u, w});
            }
        }

        int curDistance = DijkstraMethod(n, source, destination, target, adj);

        if (curDistance < target)
            return vector<vector<int>>();

        bool matchesTarget = (curDistance == target);

        for (auto &item : edges)
        {
            if (item[2] == -1)
            {
                // Set edge weight to a large value if current distance matches
                // target, else set to 1
                item[2] = matchesTarget ? INF : 1;

                int u = item[0];
                int v = item[1];
                int w = item[2];

                adj[u].push_back({v, w});
                adj[v].push_back({u, w});

                // If current shortest distance does not match target
                if (!matchesTarget)
                {
                    int newDistance = DijkstraMethod(n, source, destination, target, adj);

                    if (newDistance <= target)
                    {
                        matchesTarget = true;
                        item[2] += target - newDistance;
                    }
                }
            }
        }

        return matchesTarget ? edges : vector<vector<int>>();
    }

private:
    int DijkstraMethod(int n, int source, int destination, int target, vector<IPair> adj[])
    {
        vector<int> minDistance(n, INF);
        priority_queue<IPair, vector<IPair>, greater<>> pq;

        pq.push({0, source}); // {distance, node}
        minDistance[source] = 0;

        while (!pq.empty())
        {
            int curDis = pq.top().first;
            int node = pq.top().second;

            // removed it from queue
            pq.pop();

            for (auto adjNode : adj[node])
            {
                int v = adjNode.first;
                int w = adjNode.second;

                int new_dis = (curDis + w);

                if (new_dis < minDistance[v])
                {
                    minDistance[v] = new_dis;
                    pq.push({new_dis, v});
                }
            }
        }

        return minDistance[destination];
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{4, 1, -1}, {2, 0, -1}, {0, 3, -1}, {4, 3, -1}};
    int n = 5, source = 0, destination = 1, target = 5;

    vector<vector<int>> res = obj.modifiedGraphEdges(n, edges, source, destination, target);

    for (auto item : res)
    {
        cout << item[0] << " " << item[1] << " " << item[2] << endl;
    }
    return 0;
}