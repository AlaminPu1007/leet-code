#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return DFS(0, 0, m, n, dp);
    }
    int DFS(int row, int col, int m, int n, vector<vector<int>> &dp)
    {
        if (row == m - 1 && col == n - 1)
            return 1;

        // check boundary of the grid
        if (m <= row || n <= col)
            return 0;

        if (dp[row][col] != -1)
            return dp[row][col];

        // visit bottom of the grid
        int bottom = DFS(row + 1, col, m, n, dp);

        // visit left column of the grid
        int leftColumn = DFS(row, col + 1, m, n, dp);

        return dp[row][col] = (bottom + leftColumn);
    }
};

int main(void)
{
    Solution obj;
    cout << obj.uniquePaths(3, 7) << endl;
    return 0;
}