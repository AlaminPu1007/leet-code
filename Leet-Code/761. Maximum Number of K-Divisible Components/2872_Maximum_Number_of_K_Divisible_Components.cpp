#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxKDivisibleComponents(int n, vector<vector<int>> &edges, vector<int> &values, int k)
    {
        // create a adjacency list. it will make easier to traverse neighbors nodes.
        vector<int> adj[n];

        for (auto item : edges)
        {
            int u = item[0];
            int v = item[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int res = 0;

        // any node can be source node, in my case i am assuming 0
        countDivisibleComponents(0, -1, adj, values, k, res);

        return res;
    }

private:
    int countDivisibleComponents(int node, int parent, vector<int> adj[], vector<int> &values, int k, int &res)
    {
        // initialize sum to calculates, current sub-tree sum
        int sum = values[node];

        for (auto neighborNode : adj[node])
        {
            // to avoid circle called by calling parent node again
            if (neighborNode != parent)
            {
                sum += countDivisibleComponents(neighborNode, node, adj, values, k, res);

                sum %= k;
            }
        }

        // if sum is 0, then it means we can divide this sub-tree by k
        sum %= k;

        if (sum == 0)
            res++;

        return sum;
    }
};

int main(void)
{
    Solution obj;

    int n = 5, k = 6;
    vector<int> values = {1, 8, 1, 4, 4};
    vector<vector<int>> edges = {{0, 2}, {1, 2}, {1, 3}, {2, 4}};

    cout << obj.maxKDivisibleComponents(n, edges, values, k) << endl;

    return 0;
}