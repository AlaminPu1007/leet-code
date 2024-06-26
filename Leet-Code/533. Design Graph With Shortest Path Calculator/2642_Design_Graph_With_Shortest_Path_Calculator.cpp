#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;

class Graph
{
    vector<vector<iPair>> adj;

public:
    Graph(int n, vector<vector<int>> &edges)
    {
        adj.resize(n);
        // create an adjacency list
        for (auto item : edges)
        {
            adj[item[0]].push_back(make_pair(item[1], item[2]));
        }
    }

    void addEdge(vector<int> edge)
    {
        adj[edge[0]].push_back(make_pair(edge[1], edge[2]));
    }

    int shortestPath(int node1, int node2)
    {
        int n = adj.size();
        vector<int> costs(n, INT_MAX);

        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

        pq.push({0, node1});
        costs[node1] = 0;

        while (!pq.empty())
        {
            int curCost = pq.top().first;
            int node = pq.top().second;

            pq.pop();

            if (curCost > costs[node])
                continue;

            if (node == node2)
                return curCost;

            for (auto neighbour : adj[node])
            {
                int neighbourCost = neighbour.second;
                int neighbourNode = neighbour.first;

                if (curCost + neighbourCost < costs[neighbourNode])
                {
                    pq.push({curCost + neighbourCost, neighbourNode});
                    costs[neighbourNode] = curCost + neighbourCost;
                }
            }
        }
        return -1;
    }
};