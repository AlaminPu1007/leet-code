
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  typedef pair<int, int> iPair;

public:
  int networkDelayTime(vector<vector<int>> &times, int n, int k)
  {

    vector<pair<int, int>> adj[n + 1];

    for (auto item : times)
    {
      int u = item[0];
      int v = item[1];
      int w = item[2];

      adj[u].push_back({v, w});
    }

    vector<int> dis(n + 1, INT_MAX);
    dis[k] = 0, dis[0] = 0;

    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

    pq.push({0, k});

    while (!pq.empty())
    {
      int node = pq.top().second;
      int w = pq.top().first;

      pq.pop();

      // iterate over the adjacency list
      for (auto adjNode : adj[node])
      {
        int nei_node = adjNode.first;
        int cost = w + adjNode.second;

        if (cost < dis[nei_node])
        {
          dis[nei_node] = cost;
          pq.push({cost, nei_node});
        }
      }
    }

    int ans = 0;

    for (auto it : dis)
    {
      ans = max(it, ans);

      if (ans == INT_MAX)
        return -1;
    }

    return ans;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> edges = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
  int n = 4, k = 2;
  cout << obj.networkDelayTime(edges, n, k) << endl;
  return 0;
}