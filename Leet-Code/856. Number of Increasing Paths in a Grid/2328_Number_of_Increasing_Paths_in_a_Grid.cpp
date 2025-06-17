#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int del_row[4] = {-1, 0, +1, 0};
    int del_col[4] = {0, +1, 0, -1};
    const int MOD = 1e9 + 7;

public:
    int countPaths(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int res = 0;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                res = (res + Solved(i, j, grid, n, m, dp)) % MOD;
            }
        }

        return res;
    }

private:
    int Solved(int row, int col, vector<vector<int>> &grid, int n, int m, vector<vector<int>> &dp)
    {

        if (!isSafe(row, col, n, m))
            return 0;

        if (dp[row][col] != -1)
            return dp[row][col];

        int res = 1;

        for (int i = 0; i < 4; i++)
        {
            int new_row = del_row[i] + row;
            int new_col = del_col[i] + col;

            if (isSafe(new_row, new_col, n, m) && grid[new_row][new_col] < grid[row][col])
                res = (res + Solved(new_row, new_col, grid, n, m, dp)) % MOD;
        }

        return dp[row][col] = (res % MOD);
    }

private:
    bool isSafe(int row, int col, int n, int m)
    {
        return (row >= 0 && row < n && col >= 0 && col < m);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 1}, {3, 4}};

    cout << obj.countPaths(grid) << endl;

    return 0;
}