#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxTargetNodes(vector<vector<int>> &edges1, vector<vector<int>> &edges2, int k)
    {
        int m = edges1.size() + 1, n = edges2.size() + 1;

        vector<vector<int>> adj1(m), adj2(n);

        // create a adjacency list of edges1
        for (auto &item : edges1)
        {
            int u = item[0];
            int v = item[1];

            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }

        // create a adjacency list of edges2
        for (auto &item : edges2)
        {
            int u = item[0];
            int v = item[1];

            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }

        int best = 0;

        for (int i = 0; i < n; i++)
        {
            best = max(best, BFS(i, adj2, k - 1));
        }

        vector<int> res(m);

        for (int i = 0; i < m; i++)
        {
            res[i] = best + BFS(i, adj1, k);
        }

        return res;
    }

private:
    int BFS(int srcNode, vector<vector<int>> &adj, int k)
    {
        if (k < 0)
            return 0;

        queue<pair<int, int>> q;
        q.push({srcNode, -1});
        int res = 0;

        while (!q.empty() && k >= 0)
        {
            int size = q.size();
            res += size;

            for (int i = 0; i < size; i++)
            {
                auto [node, parent] = q.front();
                q.pop();

                for (auto adjNode : adj[node])
                {
                    if (adjNode != parent)
                    {
                        q.push({adjNode, node});
                    }
                }
            }
            k--;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges1 = {{0, 1}, {0, 2}, {2, 3}, {2, 4}};
    vector<vector<int>> edges2 = {{0, 1}, {0, 2}, {0, 3}, {2, 7}, {1, 4}, {4, 5}, {4, 6}};

    vector<int> res = obj.maxTargetNodes(edges1, edges2, 2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}