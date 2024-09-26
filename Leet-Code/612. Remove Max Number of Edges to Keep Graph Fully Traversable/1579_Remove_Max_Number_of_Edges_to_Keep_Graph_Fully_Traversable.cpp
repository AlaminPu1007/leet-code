
#include <bits/stdc++.h>
using namespace std;

// define a dsa for disjoint set
// the procedure will be union by rank
class DSU
{
public:
  vector<int> parents;
  vector<int> rank;
  int component;
  DSU(int n)
  {
    parents.resize(n + 1);
    // initialize ranks
    rank.resize(n + 1, 0);

    component = n;

    for (int i = 1; i <= n; i++)
      parents[i] = i;
  }

  // this method help us to find ultimate(root parent) of given node
  // as well as help as to path compression
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
    component--;
  }
  bool isComponentEqualToOne()
  {
    return component == 1;
  }
};

class Solution
{
public:
  int maxNumEdgesToRemove(int n, vector<vector<int>> &edges)
  {
    // define dsu for alice, (type = 1)
    DSU alice(n);

    // define dsu for bob, (type = 2)
    DSU bob(n);

    auto lambda = [](vector<int> &v1, vector<int> &v2)
    {
      return v1[0] > v2[0];
    };

    // sort array by type with descending order
    sort(begin(edges), end(edges), lambda);

    int componentEdge = 0;

    for (auto item : edges)
    {
      int type = item[0];
      int u = item[1];
      int v = item[2];

      // fot type 3
      if (type == 3)
      {
        bool flag = false;

        // do path compression for alice
        if (alice.findParent(u) != alice.findParent(v))
        {
          alice.unionByRank(u, v);
          flag = true;
        }

        // do path compression for alice
        if (bob.findParent(u) != bob.findParent(v))
        {
          bob.unionByRank(u, v);
          flag = true;
        }

        if (flag)
          componentEdge++;
      }

      else if (type == 1)
      {
        if (alice.findParent(u) != alice.findParent(v))
        {
          alice.unionByRank(u, v);
          componentEdge++;
        }
      }
      else
      {
        if (bob.findParent(u) != bob.findParent(v))
        {
          bob.unionByRank(u, v);
          componentEdge++;
        }
      }
    }

    if (alice.isComponentEqualToOne() && bob.isComponentEqualToOne())
      return edges.size() - componentEdge;

    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> edges = {{3, 1, 2}, {3, 2, 3}, {1, 1, 3}, {1, 2, 4}, {1, 1, 2}, {2, 3, 4}};
  cout << obj.maxNumEdgesToRemove(4, edges) << endl;
  return 0;
}