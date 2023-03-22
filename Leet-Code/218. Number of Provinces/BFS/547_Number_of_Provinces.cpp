#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int ans = 0;
        int len1 = isConnected.size(), len2 = isConnected[0].size();

        vector<int> vis(len1, 0);
        // define adj list
        vector<int> adj[len1];

        // to change adjacency matrix to list
        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                // i != j -> to avoid self node
                if (isConnected[i][j] == 1 && i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        for (int i = 0; i < len1; i++)
        {
            if (!vis[i])
            {
                ans++;
                BFS(i, adj, vis);
            }
        }

        return ans;
    }

private:
    void BFS(int node, vector<int> adj[], vector<int> &vis)
    {
        queue<int> q;
        q.push(node);

        vis[node] = 1;

        while (!q.empty())
        {
            int new_node = q.front();
            q.pop();

            for (auto item : adj[new_node])
            {
                if (!vis[item])
                {
                    q.push(item);
                    vis[item] = 1;
                }
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {
        {1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int res = obj.findCircleNum(arr);
    cout << res << endl;
    return 0;
}