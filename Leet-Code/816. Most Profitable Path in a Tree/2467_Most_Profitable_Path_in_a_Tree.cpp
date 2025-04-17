#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostProfitablePath(vector<vector<int>> &edges, int bob, vector<int> &amount)
    {
        // initialization of necessary thing
        int res = INT_MIN;
        int n = edges.size();
        vector<int> adj[n + 1];
        // Bob path will hold {node, time}
        unordered_map<int, int> bobPath;

        // create a adjacency from given edges
        for (int i = 0; i < n; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];

            // make a undirected relationship
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // perform a DFS traversal to get the path of BOB
        getBobPath(adj, bob, -1, 0, bobPath);

        // get max profit of alice
        aliceProfitablePath(res, adj, amount, bobPath, n);

        return res;
    }

private:
    void aliceProfitablePath(int &res, vector<int> adj[], vector<int> &amount, unordered_map<int, int> &bobPath, int n)
    {
        // will hold {node, time, parent, total_profit}
        queue<vector<int>> q;
        vector<int> visited(n + 1, 0);

        // put this node as a source node
        q.push({0, 0, -1, amount[0]});

        // mark as visited
        visited[0] = 1;

        int maxProfit = 0;

        while (q.size())
        {

            vector<int> item = q.front();

            // removed it form queue
            q.pop();

            int node = item[0];
            int time = item[1];
            int parent = item[2];
            int total_profit = item[3];

            // iterate over the adjacency list
            for (auto nei : adj[node])
            {
                if (nei == parent)
                    continue;

                int nei_profit = amount[nei];

                if (bobPath.find(nei) != bobPath.end())
                {
                    if (time + 1 > bobPath[nei])
                        nei_profit = 0;

                    if (time + 1 == bobPath[nei])
                        nei_profit = nei_profit / 2;
                }

                // put current nei node into queue
                q.push({nei, time + 1, node, total_profit + nei_profit});

                // update result only reached to leaf node
                if (adj[nei].size() == 1)
                    res = max(res, total_profit + nei_profit);
            }
        }
    }

private:
    bool getBobPath(vector<int> adj[], int node, int parent, int time, unordered_map<int, int> &bobPath)
    {
        // if we reached at source node
        if (node == 0)
        {
            bobPath[0] = time;
            return true;
        }

        // iterate over the adjacency list
        for (auto nei : adj[node])
        {
            // if the nei node is a parent node
            if (nei == parent)
                continue;

            // make a dfs called
            if (getBobPath(adj, nei, node, time + 1, bobPath))
            {
                // store node as a valid path
                bobPath[node] = time;
                return true;
            }
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}, {3, 4}};
    int bob = 3;
    vector<int> amount = {-2, 4, 2, -4, 6};

    cout << obj.mostProfitablePath(edges, bob, amount) << endl;

    return 0;
}