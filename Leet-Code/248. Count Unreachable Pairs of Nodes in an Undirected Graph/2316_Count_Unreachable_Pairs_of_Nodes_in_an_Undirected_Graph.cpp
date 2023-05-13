#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countPairs(int n, vector<vector<int>> &edges)
    {
        long long ans = 0;
        vector<int> adj[n];
        vector<int> vis(n, 0);

        for (auto item : edges)
        {
            adj[item[0]].push_back(item[1]);
            adj[item[1]].push_back(item[0]);
        }

        int totalNode = n;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                long long counter = 0;
                // make an DFS method call
                DFS(i, vis, adj, counter);
                ans += counter * (totalNode - counter);

                totalNode -= counter;
            }
        }

        return ans;
    }

private:
    void DFS(int node, vector<int> &vis, vector<int> adj[], long long &counter)
    {
        vis[node] = 1;
        counter++;
        for (auto item : adj[node])
            if (!vis[item])
                DFS(item, vis, adj, counter);
        }
};

int main(void)
{
    Solution obj;
    int n = 3;
    // vector<vector<int>> edges = {{0, 2}, {0, 5}, {2, 4}, {1, 6}, {5, 4}};
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}};
    long long ans = obj.countPairs(n, edges);
    cout << ans << endl;
    return 0;
}