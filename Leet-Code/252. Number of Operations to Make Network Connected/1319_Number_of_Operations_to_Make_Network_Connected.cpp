#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void DFS(int startNode, vector<int> &vis, vector<int> adj[])
    {
        vis[startNode] = 1;

        for (auto item : adj[startNode])
        {
            if (!vis[item])
            {
                DFS(item, vis, adj);
            }
        }
    }

public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {

        if (connections.size() < n - 1)
            return -1;

        vector<int> adj[n];
        vector<int> vis(n, 0);

        for (auto item : connections)
        {
            adj[item[0]].push_back(item[1]);
            adj[item[1]].push_back(item[0]);
        }

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                DFS(i, vis, adj);
                counter++;
            }
        }

        return counter - 1;
    }
};

int main(void)
{
    Solution obj;
    int n = 6;
    vector<vector<int>> board = {
        {0, 1}, {0, 2}, {0, 3}, {1, 2}};
    int res = obj.makeConnected(n, board);
    cout << res << endl;
    return 0;
}