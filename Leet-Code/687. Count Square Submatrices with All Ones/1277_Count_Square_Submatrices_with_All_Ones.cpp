#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSquares(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                res += DFS(i, j, matrix, n, m, dp);
            }
        }

        return res;
    }

private:
    int DFS(int row, int col, vector<vector<int>> &matrix, int n, int m, vector<vector<int>> &dp)
    {
        if (row >= n || col >= m || matrix[row][col] == 0)
            return 0;

        if (dp[row][col] != -1)
            return dp[row][col];

        int r = DFS(row + 1, col, matrix, n, m, dp);
        int b = DFS(row, col + 1, matrix, n, m, dp);
        int d = DFS(row + 1, col + 1, matrix, n, m, dp);

        int len = 1 + min(r, min(b, d));

        return dp[row][col] = len;
    }
};

int main(void)
{

    Solution obj;
    vector<vector<int>> arr = {{0, 1, 1, 1},
                               {1, 1, 1, 1},
                               {0, 1, 1, 1}};
    cout << obj.countSquares(arr) << endl;
    return 0;
}