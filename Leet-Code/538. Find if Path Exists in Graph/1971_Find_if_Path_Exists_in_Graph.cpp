#include <bits/stdc++.h>
using namespace std;

// Union by rank
class PathCompression
{
  vector<int> parents, rank;

public:
  PathCompression(int n)
  {
    parents.resize(n + 1);
    // initialize parent's
    for (int i = 0; i <= n; i++)
    {
      parents[i] = i;
    }

    // initialize ranks
    rank.resize(n + 1, 0);
  }

  // this method help us to find ultimate(root parent) of given node
  int findParent(int node)
  {
    if (node == parents[node])
      return node;

    else
      return parents[node] = findParent(parents[node]);
  }

  void unionByRank(int u, int v)
  {
    int ulp_u = findParent(u);
    int ulp_v = findParent(v);

    if (ulp_u == ulp_v)
      return;

    if (rank[ulp_u] < rank[ulp_v])
    {
      parents[ulp_u] = ulp_v;
    }

    else if (rank[ulp_v] < rank[ulp_u])
    {
      parents[ulp_v] = ulp_u;
    }

    else
    {
      parents[ulp_v] = ulp_u;
      rank[ulp_u]++;
    }
  }
};

class Solution
{
public:
  bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
  {

    if (source == destination)
      return true;

    PathCompression obj(n);

    for (auto item : edges)
    {
      obj.unionByRank(item[0], item[1]);
    }

    return obj.findParent(source) == obj.findParent(destination);
  }
};

int main(void)
{
  Solution obj;
  int n = 10, source = 5, destination = 9;
  vector<vector<int>> edges = {{4, 3}, {1, 4}, {4, 8}, {1, 7}, {6, 4}, {4, 2}, {7, 4}, {4, 0}, {0, 9}, {5, 4}};
  cout << obj.validPath(n, edges, source, destination) << endl;
  return 0;
}