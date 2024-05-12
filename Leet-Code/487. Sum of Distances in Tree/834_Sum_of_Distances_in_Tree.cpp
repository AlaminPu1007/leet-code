/**
 * Time-Complexity: O(N * V * E)
 * Space-Complexity: `O(V * E)`
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
  {
    vector<int> adj[n];
    vector<int> res;

    for (auto item : edges)
    {
      adj[item[0]].push_back(item[1]);
      adj[item[1]].push_back(item[0]);
    }

    for (int i = 0; i < n; i++)
      BFS(i, adj, res, n);

    return res;
  }

private:
  void BFS(int node, vector<int> adj[], vector<int> &res, int n)
  {
    queue<int> q;
    q.push(node);
    vector<int> vis(n, 0);

    vis[node] = 1;

    int cnt = 0, l = 1;

    while (q.size())
    {

      int size = q.size();

      // level order traversal
      for (int i = 0; i < size; i++)
      {
        int tempNode = q.front();
        q.pop();

        vis[tempNode] = 1;

        // traverse adjacency list of the given graph
        for (auto adjNode : adj[tempNode])
        {
          if (vis[adjNode] == 0)
          {
            q.push(adjNode);
            vis[adjNode] = 1;
            cnt += l;
          }
        }
      }
      l++;
    }
    res.push_back(cnt);
  }
};

int main(void)
{
  Solution obj;
  int n = 6;
  vector<vector<int>> edges = {{0, 1},
                               {0, 2},
                               {2, 3},
                               {2, 4},
                               {2, 5}};
  vector<int> res = obj.sumOfDistancesInTree(n, edges);

  for (auto item : res)
    cout << item << " ";
  return 0;
}