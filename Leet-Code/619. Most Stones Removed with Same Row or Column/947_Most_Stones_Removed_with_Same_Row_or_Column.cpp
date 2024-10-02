#include <bits/stdc++.h>
using namespace std;

// create a class for DSU (disjoint set -> union by rank)
class DSU
{
public:
  vector<int> parent, rank;
  DSU(int n)
  {
    parent.resize(n + 1);
    rank.resize(n + 1, 0);

    // make each node parent itself
    for (int i = 0; i <= n; i++)
    {
      parent[i] = i;
    }
  }

  int findUltimateParent(int node)
  {
    if (node == parent[node])
      return node;

    else
      return parent[node] = findUltimateParent(parent[node]);
  }

  void unionByRank(int u, int v)
  {
    int ulp_u = findUltimateParent(u);
    int ulp_v = findUltimateParent(v);

    if (ulp_u == ulp_v)
      return;

    if (rank[ulp_u] < rank[ulp_v])
    {
      parent[ulp_u] = ulp_v;
    }

    else if (rank[ulp_v] < rank[ulp_u])
    {
      parent[ulp_v] = ulp_u;
    }

    else
    {
      parent[ulp_v] = ulp_u;
      rank[ulp_u]++;
    }
  }
};

class Solution
{
public:
  int removeStones(vector<vector<int>> &stones)
  {
    int n = stones.size();
    int maxRow = 0, maxCol = 0;
    unordered_map<int, int> uniqueNode;

    for (auto item : stones)
    {
      maxRow = max(maxRow, item[0]);
      maxCol = max(maxCol, item[1]);
    }

    DSU obj(maxRow + maxCol + 1);

    for (auto item : stones)
    {
      int rowNode = item[0];
      int colNode = item[1] + maxRow + 1;
      // now connect this
      obj.unionByRank(rowNode, colNode);

      uniqueNode[rowNode] = 1;
      uniqueNode[colNode] = 1;
    }

    int count = 0;

    for (auto item : uniqueNode)
    {
      if (obj.findUltimateParent(item.first) == item.first)
        count++;
    }

    return n - count;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> stones = {{0, 0}, {0, 1}, {1, 0}, {1, 2}, {2, 1}, {2, 2}};
  cout << obj.removeStones(stones) << endl;
  return 0;
}