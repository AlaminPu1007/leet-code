#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
  {
    if (n == 1)
      return {0}; // If there's only one node, return it as the root of the tree

    vector<int> res; // Result vector to store the root(s) of the minimum height tree(s)
    queue<int> q;    // Queue for BFS traversal

    vector<int> adj[n];      // Adjacency list for each node
    vector<int> inDeg(n, 0); // Array to store in-degree of each node

    // Create an adjacency list and calculate in-degree for each node
    for (auto item : edges)
    {
      int u = item[0];
      int v = item[1];

      adj[u].push_back(v);
      adj[v].push_back(u);

      inDeg[u]++;
      inDeg[v]++;
    }

    // Push nodes with in-degree 1 into the queue
    for (int i = 0; i < n; i++)
    {
      if (inDeg[i] == 1)
        q.push(i);
    }

    // Perform BFS to find minimum height trees
    while (!q.empty())
    {
      int size = q.size();
      res.clear(); // Clear the result vector for each level of BFS traversal

      for (int i = 0; i < size; i++)
      {
        int node = q.front();
        q.pop();

        res.push_back(node); // Add node to the result vector

        // Update in-degree of adjacent nodes and push them into the queue if in-degree becomes 1
        for (auto item : adj[node])
        {
          inDeg[item]--;

          if (inDeg[item] == 1)
            q.push(item);
        }
      }
    }

    return res; // Return the root(s) of the minimum height tree(s)
  }
};

int main(void)
{
  Solution obj;
  int n = 6;
  vector<vector<int>> edges = {
      {3, 0},
      {3, 1},
      {3, 2},
      {3, 4},
      {5, 4}};
  vector<int> res = obj.findMinHeightTrees(n, edges);
  for (auto item : res)
    cout << item << " ";
  return 0;
}