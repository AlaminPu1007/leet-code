
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int N;
  vector<int> count;
  long result_base_node = 0;

public:
  vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
  {
    vector<int> adj[n];
    vector<int> res(n, 0);

    // initialize with default value
    N = n;
    count.resize(n, 0);
    result_base_node = 0;

    for (auto item : edges)
    {
      adj[item[0]].push_back(item[1]);
      adj[item[1]].push_back(item[0]);
    }

    // 0 -> source node, -1 -> parent_node, adj -> adjacency list, 0 -> level of current depth
    DFSOfBase(0, -1, adj, 0);

    res[0] = result_base_node;

    // calculate the remaining node
    DFS(0, -1, adj, res);

    return res;
  }

private:
  /*
    This method will count the total child node of each node include it self
    and also calculate the first node result or depth as a answer
  */
  int DFSOfBase(int cur_node, int prv_node, vector<int> adj[], int cur_depth)
  {
    // count resul of base node (ex: 0)
    result_base_node += cur_depth;

    int total_node_include_child = 1;

    // traverse the adjacency list of cur_node
    for (auto &adjNode : adj[cur_node])
    {
      // if cur_node == parent_node, then avoid to make dfs called
      // to avoid infinity loop
      if (adjNode == prv_node)
        continue;

      total_node_include_child += DFSOfBase(adjNode, cur_node, adj, cur_depth + 1);
    }

    // now store it's total child length into count vector
    count[cur_node] = total_node_include_child;

    // and return them for previous dfs method
    return total_node_include_child;
  }

  /*
    This method will calculate the remaining node depending on the source node value
    (ex: 0), in this test case the first source node depth count is -> 8
  */
  void DFS(int cur_node, int prv_node, vector<int> adj[], vector<int> &res)
  {
    // traverse all the adjacency list of cur_node
    for (auto adj_node : adj[cur_node])
    {
      // if cur_node == parent_node, then avoid to make dfs called
      // to avoid infinity loop
      if (adj_node == prv_node)
        continue;

      // res[adj_node] = (base_node_of_total_count - child_of_cur_node + (N - child_of_cur_node))
      // ex: res[2] = (8 - 4 + (6 - 4))

      res[adj_node] = res[cur_node] - count[adj_node] + (N - count[adj_node]);

      // then made the DFS called for next node
      DFS(adj_node, cur_node, adj, res);
    }
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