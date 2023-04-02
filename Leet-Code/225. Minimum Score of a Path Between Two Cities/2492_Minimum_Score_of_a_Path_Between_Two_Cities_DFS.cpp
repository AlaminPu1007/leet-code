#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void DFS(int startNode, vector<int> &vis, vector<pair<int, int>> adj[], int &ans)
    {
        vis[startNode] = 1;

        for (auto item : adj[startNode])
        {
            ans = min(ans, item.second);
            if (!vis[item.first])
            {
                DFS(item.first, vis, adj, ans);
            }
        }
    }

public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        vector<pair<int, int>> adj[n + 1];
        vector<int> vis(n + 1, 0);

        int ans = INT_MAX;

        for (auto item : roads)
        {
            // it will hold first-item as a node and last item as a weight
            // u -> v
            adj[item[0]].push_back({item[1], item[2]});
            // v -> u
            adj[item[1]].push_back({item[0], item[2]});
        }

        DFS(1, vis, adj, ans);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int n = 14;
    vector<vector<int>> adj = {
        {2, 9, 2308}, {2, 5, 2150}, {12, 3, 4944}, {13, 5, 5462}, {2, 10, 2187}, {2, 12, 8132}, {2, 13, 3666}, {4, 14, 3019}, {2, 4, 6759}, {2, 14, 9869}, {1, 10, 8147}, {3, 4, 7971}, {9, 13, 8026}, {5, 12, 9982}, {10, 9, 6459}};
    int ans = obj.minScore(n, adj);
    cout << ans << endl;
    return 0;
}