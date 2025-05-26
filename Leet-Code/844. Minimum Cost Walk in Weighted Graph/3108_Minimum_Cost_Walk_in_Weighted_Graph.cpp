#include <bits/stdc++.h>
using namespace std;

class DSU
{
public:
    vector<int> parents, rank;
    DSU(int _n)
    {
        parents.resize(_n + 1);
        rank.resize(_n + 1);

        // initially every node parent's it's own self
        for (int i = 0; i <= _n; i++)
            parents[i] = i;
    }

public:
    int findUltimateParent(int node)
    {
        if (node == parents[node])
            return node;

        return parents[node] = findUltimateParent(parents[node]);
    }

public:
    void unionByRank(int _u, int _v)
    {
        int u = findUltimateParent(_u);
        int v = findUltimateParent(_v);

        if (u == v)
            return;

        if (rank[u] < rank[v])
            parents[u] = v;

        else if (rank[v] < rank[u])
            parents[v] = u;

        else
        {
            parents[u] = v;
            rank[v]++;
        }
    }
};

class Solution
{
public:
    vector<int> minimumCost(int n, vector<vector<int>> &edges, vector<vector<int>> &query)
    {
        DSU obj(n);
        unordered_map<int, int> Map;

        // union by rank for each component
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];
            int w = item[2];

            if (obj.findUltimateParent(u) != obj.findUltimateParent(v))
                obj.unionByRank(u, v);
        }

        // pre-processing of each component weight by doing and operation
        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];
            int w = item[2];

            int rootNode = obj.findUltimateParent(u);

            if (Map.find(rootNode) != Map.end())
                Map[rootNode] &= w;

            else
                Map[rootNode] = w;
        }

        vector<int> res;

        // iterate over the query and calculate the results
        for (auto item : query)
        {
            int rootNode1 = obj.findUltimateParent(item[0]);
            int rootNode2 = obj.findUltimateParent(item[1]);

            if (rootNode1 != rootNode2)
                res.push_back(-1);
            else
                res.push_back(Map[rootNode1]);
        }

        return res;
    };
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 1, 7}, {1, 3, 7}, {1, 2, 1}};
    vector<vector<int>> query = {{0, 3}, {3, 4}};

    vector<int> res = obj.minimumCost(5, edges, query);

    for (auto item : res)
        cout << item << " ";

    return 0;
}