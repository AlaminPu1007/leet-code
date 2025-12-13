#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numberOfPaths(vector<vector<int>> &grid, int k)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, -1)));

        return DFS(0, 0, 0, grid, n, m, k, dp);
    };

private:
    int DFS(int r, int c, int rem, vector<vector<int>> &grid, int n, int m, int k, vector<vector<vector<int>>> &dp)
    {
        if (r == n - 1 && c == m - 1)
        {
            rem = (rem + grid[r][c]) % k;

            if (rem == 0)
                return 1;
            else
                return 0;
        }

        // check out of bound
        if (r >= n || c >= m)
        {
            return 0;
        }

        if (dp[r][c][rem] != -1)
            return dp[r][c][rem];

        int value = (rem + grid[r][c]) % k;

        dp[r][c][rem] = (
            // get down row
            DFS(r + 1, c, value, grid, n, m, k, dp) % MOD +
            // get right column
            DFS(r, c + 1, value, grid, n, m, k, dp) % MOD);

        return dp[r][c][rem] % MOD;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{5, 2, 4}, {3, 0, 5}, {0, 7, 2}};

    cout << obj.numberOfPaths(arr, 3) << endl;

    return 0;
}