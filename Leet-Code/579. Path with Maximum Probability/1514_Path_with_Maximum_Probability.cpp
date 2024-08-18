#include <bits/stdc++.h>
using namespace std;

class Solution
{
  typedef pair<double, int> iPair;

public:
  double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start_node, int end_node)
  {
    vector<pair<int, double>> adj[n];

    for (int i = 0; i < edges.size(); i++)
    {
      int u = edges[i][0];
      int v = edges[i][1];
      double w = succProb[i];

      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
    }

    vector<double> dis(n, INT_MIN);
    dis[start_node] = 0.0;

    priority_queue<iPair> pq;

    pq.push({1.0, start_node});

    while (!pq.empty())
    {
      int node = pq.top().second;
      double w = pq.top().first;

      // cout << node << " " << w << endl;

      pq.pop();

      if (node == end_node)
        return w;

      // iterate over the adjacency list
      for (auto adjNode : adj[node])
      {
        int nei_node = adjNode.first;
        double cost = w * adjNode.second;

        // cout << " cost " << cost << endl;

        if (cost > dis[nei_node])
        {
          dis[nei_node] = cost;
          pq.push({cost, nei_node});
        }
      }
    }

    return 0.0;
  }
};

int main(void)
{
  int n = 3;
  vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
  vector<double> succProb = {0.5, 0.5, 0.2};
  int start = 0, end = 2;

  Solution obj;
  cout << obj.maxProbability(n, edges, succProb, start, end) << endl;
  return 0;
}