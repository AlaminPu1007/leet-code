#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int closestMeetingNode(vector<int> &edges, int node1, int node2)
    {
        int n = edges.size();
        unordered_map<int, int> node1Dist, node2Dist;
        vector<vector<int>> adj(n);

        // create a adjacency list
        for (int i = 0; i < n; i++)
            if (edges[i] != -1)
                adj[i].push_back(edges[i]);

        BFS(node1, node1Dist, adj);
        BFS(node2, node2Dist, adj);

        int res = -1, maxDist = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (node1Dist.find(i) != node1Dist.end() && node2Dist.find(i) != node2Dist.end())
            {
                int dis = max(node1Dist[i], node2Dist[i]);

                if (dis < maxDist)
                {
                    res = i;
                    maxDist = dis;
                }
            }
        }

        return res;
    }

private:
    void BFS(int src, unordered_map<int, int> &Map, vector<vector<int>> &adj)
    {
        queue<pair<int, int>> q;
        q.push({src, 0}); // {node, distance}
        Map[src] = 0;

        while (q.size())
        {
            auto [node, distance] = q.front();

            // remove item from queue
            q.pop();

            for (auto neiNode : adj[node])
            {
                if (Map.find(neiNode) == Map.end())
                {
                    q.push({neiNode, distance + 1});
                    Map[neiNode] = distance + 1;
                }
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> edges = {2, 2, 3, -1};
    int node1 = 0, node2 = 1;

    cout << obj.closestMeetingNode(edges, node1, node2) << endl;

    return 0;
}