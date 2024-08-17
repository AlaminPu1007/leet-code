/**
 * To solved this problem we need BFS algorithm.
 * Why we choose BFS ?
 * In this problem given time will be weight for each edges. All has same weight, that's the reason we choose BFS.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int secondMinimum(int n, vector<vector<int>> &edges, int time, int change)
  {
    // initialize a adjacency list, that will created a undirected graph
    vector<int> adj[n + 1];
    for (auto item : edges)
    {
      int u = item[0];
      int v = item[1];

      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    queue<int> q;

    // Put source node (1) into the queue
    q.push(1);

    // define a visited unordered_map, that will tell us we can visit a node at most twice,
    // and avoid to visit each node it's previous has some cur_time
    /*
      since the task requires tracking the second minimum time.
      If we only keep track of the first visit time using an unordered_map<int, int>,
      we won't be able to find the second minimum time.
    */
    unordered_map<int, vector<int>> visit_times;

    int cur_times = 0, res = -1;

    while (q.size())
    {
      int size = q.size();

      // iterate level order on the queue
      for (int i = 0; i < size; i++)
      {
        int node = q.front();

        // removed current node from queue
        q.pop();

        // we avoid if destination reached has same value
        // ex: if first path reached is 2, and then second path reached is also 2, then we need the third one
        // that larger than 2
        if (node == n)
        {
          // we want the second minimal shortest path.
          // so res will ensure us to get the second smallest path
          if (res != -1)
            return cur_times;

          else
            // we can assign anything except -1
            res = 2;
        }

        // traverse all neighbors node
        for (auto nei : adj[node])
        {
          auto &nei_times = visit_times[nei];

          // this ensure us to put at most twice a node into queue
          // and avoid if they have same cur_times
          if (!nei_times.size() || (nei_times.size() == 1 && nei_times[0] != cur_times))
          {
            nei_times.push_back(cur_times);
            q.push(nei);
          }
        }
      }

      // do stuff after completed each level

      // If current time is in a red light interval, adjust to the end of the red light period
      // ex cur_times = 6(already in read zone, then waited until 10(where change can be = {5, 10, 15, ... multiple of 5})), and change = 5, then (6 / 5) == 1,
      if ((cur_times / change) % 2 == 1)
        cur_times += change - (cur_times % change);

      cur_times += time;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  int n = 5, time = 3, change = 5;
  vector<vector<int>> edges = {{1, 2}, {1, 3}, {1, 4}, {3, 4}, {4, 5}};
  cout << obj.secondMinimum(n, edges, time, change) << endl;
  return 0;
}