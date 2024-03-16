#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MOD = 1e9 + 7;
    int dp[50][50][51];

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        memset(dp, -1, sizeof(dp));
        return DFS(m, n, maxMove, startRow, startColumn);
    }

private:
    int DFS(int m, int n, int maxMove, int i, int j)
    {
        // out of boundary (base-case)
        if (i < 0 || i >= m || j < 0 || j >= n)
            return 1;

        if (maxMove == 0)
            return 0;

        if (dp[i][j][maxMove] != -1)
            return dp[i][j][maxMove];

        long long int res = 0;

        // visit downwards (row)
        res += DFS(m, n, maxMove - 1, i - 1, j) % MOD;
        // visit upwards
        res += DFS(m, n, maxMove - 1, i + 1, j) % MOD;
        // for column up wards
        res += DFS(m, n, maxMove - 1, i, j - 1) % MOD;
        // for column down wared
        res += DFS(m, n, maxMove - 1, i, j + 1) % MOD;

        res = res % MOD;

        return dp[i][j][maxMove] = res;
    }
};

int main(void)
{
    Solution obj;
    int m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0;
    cout << obj.findPaths(m, n, maxMove, startRow, startColumn) << endl;
    return 0;
}