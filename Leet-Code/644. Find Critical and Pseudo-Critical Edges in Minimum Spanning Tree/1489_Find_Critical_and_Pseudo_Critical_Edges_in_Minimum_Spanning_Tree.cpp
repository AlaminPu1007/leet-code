#include <bits/stdc++.h>
using namespace std;

/** Define disjoint set data structure */
class DSU
{
    vector<int> parents, rank;

public:
    DSU(int n)
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
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>> &edges)
    {
        // put original index into all edges
        // Time Complexity = O(n)
        for (int i = 0; i < edges.size(); i++)
            edges[i].push_back(i);

        // sort edges according to weights
        // Time Complexity = O(n * log(n))
        sort(begin(edges), end(edges), [&](vector<int> &arr1, vector<int> &arr2)
             { return arr1[2] < arr2[2]; });

        int mst_sum = handleMst(edges, -1, -1, n);

        vector<int> critical, pseudoCritical;

        // Time Complexity = O(n * n * α)
        for (int i = 0; i < edges.size(); i++)
        {
            // check critical-edges by not including in mst
            if (handleMst(edges, i, -1, n) > mst_sum)
            {
                critical.push_back(edges[i][3]);
            }
            // check pseudo-critical edges
            else if (handleMst(edges, -1, i, n) == mst_sum)
            {
                pseudoCritical.push_back(edges[i][3]);
            }
        }

        return {critical, pseudoCritical};
    }

private:
    int handleMst(vector<vector<int>> edges, int skip_idx, int add_idx, int n)
    {
        DSU obj(n); // Time-Complexity: O(α)
        int res = 0;

        // process add-edges
        if (add_idx != -1)
        {
            int u = edges[add_idx][0];
            int v = edges[add_idx][1];
            int w = edges[add_idx][2];
            obj.unionByRank(u, v);
            res += w;
        }

        // process rest of the edges
        for (int i = 0; i < edges.size(); i++)
        {
            if (i == skip_idx)
                continue;

            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            if (obj.findParent(u) != obj.findParent(v))
            {
                res += w;
                obj.unionByRank(u, v);
            }
        }

        // check if all nodes are connected
        for (int i = 0; i < n; i++)
        {
            if (obj.findParent(i) != obj.findParent(0))
                return INT_MAX; // Invalid MST
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 1}, {0, 2, 1}, {2, 3, 4}, {3, 4, 2}, {3, 5, 2}, {4, 5, 2}};
    vector<vector<int>> res = obj.findCriticalAndPseudoCriticalEdges(n, edges);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}