#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> iPair;
const int mod = (int)(1e9 + 7);
typedef long long LONG;

class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {
        // define distance array
        vector<LONG> dist(n, LLONG_MAX);
        // define ways array to hold no of ways to reach end
        vector<LONG> ways(n, 0);
        // define priority queue for traversal with minimal distance
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
        // define adjacency list to hold each node edges
        vector<iPair> adj[n];

        // making adjacency list of each node
        for (auto item : roads)
        {
            adj[item[0]].push_back({item[1], item[2]});
            adj[item[1]].push_back({item[0], item[2]});
        }

        // put source node into queue
        // it will hold -> {distance, node}
        pq.push({0, 0});
        // no of ways to reach at source node from it self is 1
        ways[0] = 1;
        // put distance for source node,, it will 0,( from o -> 0 is 0 )
        dist[0] = 0;

        // loop through queue
        while (!pq.empty())
        {
            LONG distance = pq.top().first;
            LONG node = pq.top().second;
            // remove item form queue
            pq.pop();

            // if we get an distance that will smaller than distance then skip it
            if (dist[node] < distance)
                continue;

            // traverse adjacency list of node, and push {distance, node} if we get any shortest distance
            for (auto item : adj[node])
            {
                LONG isMinDistance = distance + item.second;

                if (isMinDistance < dist[item.first])
                {
                    dist[item.first] = isMinDistance;
                    // put into queue
                    pq.push({isMinDistance, item.first});

                    ways[item.first] = ways[node];
                }
                else if (isMinDistance == dist[item.first])
                {
                    ways[item.first] = (ways[item.first] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1] % mod;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> roads = {
        {0, 6, 7},
        {0, 1, 2},
        {1, 2, 3},
        {1, 3, 3},
        {6, 3, 3},
        {3, 5, 1},
        {6, 5, 1},
        {2, 5, 1},
        {0, 4, 5},
        {4, 6, 2}};
    int res = obj.countPaths(7, roads);
    cout << res << endl;
    return 0;
}