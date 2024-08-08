/*
  To solve this problem we need 'Topological sorting" approach.
  Note: Why we need this approach ?
  Ans: Because according to this problem description, we must be need to follow the order.
  So where order is come in graph related problem, Most of the time Topological sorting approach will make our solution easier.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> buildMatrix(int k, vector<vector<int>> &rowConditions, vector<vector<int>> &colConditions)
  {
    vector<int> toPoRow = topologicalSort(rowConditions, k);
    vector<int> toPoCol = topologicalSort(colConditions, k);

    // handle invalid case
    if (toPoRow.empty() || toPoCol.empty())
      return {};

    vector<vector<int>> res(k, vector<int>(k, 0));

    for (int i = 0; i < k; i++)
    {
      for (int j = 0; j < k; j++)
      {
        if (toPoRow[i] == toPoCol[j])
        {
          res[i][j] = toPoCol[j];
        }
      }
    }

    return res;
  }

private:
  vector<int> topologicalSort(vector<vector<int>> arr, int n)
  {
    vector<int> adj[n + 1];

    vector<int> visited(n + 1, 0);
    queue<int> q;
    vector<int> inDegree(n + 1, 0);

    // count in-degree of each node
    for (auto item : arr)
    {
      inDegree[item[1]]++;

      // create a adjacency list
      adj[item[0]].push_back(item[1]);
    }

    for (int i = 1; i < inDegree.size(); i++)
      if (!inDegree[i])
        q.push(i);

    vector<int> res;

    while (!q.empty())
    {
      int node = q.front();
      q.pop();

      res.push_back(node);

      // traverse all adjacency node of parent node
      for (auto adjNode : adj[node])
      {
        inDegree[adjNode]--;

        if (!inDegree[adjNode])
          q.push(adjNode);
      }
    }

    // detect a cycle, if res.size is not equal to total node,
    // means a cycle is present
    if (res.size() != n)
      return {};

    return res;
  }
};

int main(void)
{
  Solution obj;
  int k = 3;
  vector<vector<int>> row = {{1, 2}, {3, 2}}, col = {{2, 1}, {3, 2}};
  vector<vector<int>> res = obj.buildMatrix(k, row, col);

  for (auto item : res)
  {
    for (auto it : item)
      cout << it << " ";
    cout << endl;
  }
  return 0;
}