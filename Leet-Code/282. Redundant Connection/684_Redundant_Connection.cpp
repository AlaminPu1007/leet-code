#include <bits/stdc++.h>
using namespace std;

// define reusable component of DisjointDSA
// [Learn disjoint data-structure](https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/Graph/Disjoint%20Set%2C%20Union%20by%20Rank%20%2C%20Union%20by%20Size%2C%20%20Path%20Compression)
class DisjointDSA
{
public:
    vector<int> rank, parents;
    DisjointDSA(int n)
    {
        // resize array for working on 0 base component also
        rank.resize(n + 1, 0);
        parents.resize(n + 1);

        for (int i = 0; i <= n; i++)
            parents[i] = i;
    }

    // Find ultimate parent of each given node
    int findUltimateParent(int node)
    {
        if (node == parents[node])
            return node;
        else
            return parents[node] = findUltimateParent(parents[node]);
    }

    bool unionByRank(int u, int v)
    {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if (ulp_u == ulp_v)
            return false;

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

        return true;
    }
};

class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        // define disjoint Dsa
        DisjointDSA obj(1000);

        vector<int> res;

        for (auto item : edges)
        {

            // connected smaller component with larger component to get ultimate parent of each {u, v}
            if (!obj.unionByRank(item[0], item[1]))
            {
                res.push_back(item[0]);
                res.push_back(item[1]);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2}, {2, 3}, {3, 4}, {1, 4}, {1, 5}};
    vector<int> res = obj.findRedundantConnection(arr);

    for (auto item : res)
        cout << item << " ";
    return 0;
}