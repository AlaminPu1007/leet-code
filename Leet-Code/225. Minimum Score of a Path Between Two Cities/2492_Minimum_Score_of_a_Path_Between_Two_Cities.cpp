#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        // n + 1 -> because 0 base indexing
        vector<pair<int, int>> adj[n + 1];
        vector<int> vis(n + 1, 0);
        // define ans queue
        queue<int> q;

        int ans = INT_MAX;

        for (auto item : roads)
        {
            // it will hold first-item as a node and last item as a weight
            // u -> v
            adj[item[0]].push_back({item[1], item[2]});
            // v -> u
            adj[item[1]].push_back({item[0], item[2]});
        }

        // put src node into queue
        q.push(1);
        // mark src node as visited
        vis[1] = 1;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto item : adj[node])
            {

                // cout << item.first << " " << item.second << ", ";
                ans = min(ans, item.second);
                if (!vis[item.first])
                {
                    vis[item.first] = 1;
                    q.push(item.first);
                }
            }
        }

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