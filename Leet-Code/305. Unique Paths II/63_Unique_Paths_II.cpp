#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return DFS(n - 1, m - 1, obstacleGrid, dp);
    }

private:
    int DFS(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (row >= 0 && col >= 0 && grid[row][col] == 1)
            return 0;

        if (row < 0 || col < 0)
            return 0;

        if (row == 0 && col == 0)
            return 1;

        if (dp[row][col] != -1)
            return dp[row][col];

        return dp[row][col] = DFS(row - 1, col, grid, dp) + DFS(row, col - 1, grid, dp);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {
        {1, 0}};
    cout << obj.uniquePathsWithObstacles(grid) << endl;
    return 0;
}