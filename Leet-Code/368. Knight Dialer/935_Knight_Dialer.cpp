
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int M = 1e9 + 7;
    int dp[5001][10];

    vector<vector<int>> adj = {
        {4, 6},
        {6, 8},
        {7, 9},
        {4, 8},
        {3, 9, 0},
        {},
        {1, 7, 0},
        {2, 6},
        {1, 3},
        {2, 4}};

    int knightDialer(int n)
    {
        memset(dp, -1, sizeof(dp));
        int res = 0;

        for (int i = 0; i <= 9; i++)
        {
            res = (res + Solve(n - 1, i)) % M;
        }

        return res;
    }

private:
    int Solve(int n, int node)
    {
        if (n == 0)
            return 1;

        if (dp[n][node] != -1)
            return dp[n][node];

        int ans = 0;

        // traverse all adjacency list of knight position
        for (auto adjNode : adj[node])
        {
            ans = (ans + Solve(n - 1, adjNode)) % M;
        }

        dp[n][node] = ans;

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int n = 2;
    cout << obj.knightDialer(n) << endl;
    return 0;
}