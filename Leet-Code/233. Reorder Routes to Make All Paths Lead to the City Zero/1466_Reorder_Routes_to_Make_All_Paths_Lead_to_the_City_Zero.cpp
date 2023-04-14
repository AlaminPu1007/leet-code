#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int counter = 0;
    int minReorder(int n, vector<vector<int>> &connections)
    {
        vector<pair<int, int>> adj[n];
        vector<int> vis(n, 0);

        /*
            making an adjacency list of each node.
            We can distinguish between an "original" and an "artificial" edge in many different ways
            (assigning booleans, specific numbers, etc.).
            In this article, we will associate an extra value with each edge - 1 for "original" edges
            and 0 for "artificial" edges.
        */
        for (auto item : connections)
        {
            // cout << item[0] << " " << item[1] << endl;
            // or original
            adj[item[0]].push_back({item[1], 1});
            // for artificial
            adj[item[1]].push_back({item[0], 0});
        }

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                // made an dfs called
                DFS(i, -1, vis, adj);
        }

        return counter;
    }

private:
    void DFS(int sourceNode, int parentNode, vector<int> &vis, vector<pair<int, int>> adj[])
    {
        vis[sourceNode] = 1;

        for (auto item : adj[sourceNode])
        {
            if (item.first != parentNode)
            {
                // cout << item.first << " " << item.second << endl;
                counter += item.second;
                DFS(item.first, sourceNode, vis, adj);
            }
        }
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> arr = {{0, 1}, {1, 3}, {2, 3}, {4, 0}, {4, 5}};
    int res = obj.minReorder(n, arr);
    cout << res << endl;
    return 0;
}