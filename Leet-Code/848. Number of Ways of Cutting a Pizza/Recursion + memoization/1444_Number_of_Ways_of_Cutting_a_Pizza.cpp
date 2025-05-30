#include <bits/stdc++.h>
using namespace std;

class Solution
{
    long long MOD = 1e9 + 7;

public:
    int ways(vector<string> &pizza, int k)
    {
        int n = pizza.size(), m = pizza[0].size();
        vector<vector<int>> prefixApplesSum(n + 1, vector<int>(m + 1, 0));
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, -1)));

        // fill prefix apples sum array
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                prefixApplesSum[i][j] = prefixApplesSum[i][j + 1];

                // update total apples count for remaining rows
                for (int row = i; row < n; row++)
                    prefixApplesSum[i][j] += (pizza[row][j] == 'A');
            }
        }

        return Solved(0, 0, pizza, prefixApplesSum, n, m, k, dp);
    }

private:
    int Solved(int row, int col, vector<string> &pizza, vector<vector<int>> &applesCount, int n, int m, int k, vector<vector<vector<int>>> &dp)
    {
        if (applesCount[row][col] < k)
            return 0;

        if (k == 1)
            return (applesCount[row][col] >= 1) ? 1 : 0;

        if (dp[row][col][k] != -1)
            return dp[row][col][k];

        int ans = 0;

        // slice pizza by horizontally
        for (int h = row + 1; h < n; h++)
        {
            if ((applesCount[row][col] - applesCount[h][col]) > 0 && applesCount[h][col] >= k - 1)
                ans = (ans % MOD + Solved(h, col, pizza, applesCount, n, m, k - 1, dp) % MOD) % MOD;
        }

        // slice pizza by vertically
        for (int v = col + 1; v < m; v++)
        {
            if ((applesCount[row][col] - applesCount[row][v]) > 0 && applesCount[row][v] >= k - 1)
                ans = (ans % MOD + Solved(row, v, pizza, applesCount, n, m, k - 1, dp) % MOD) % MOD;
        }

        return dp[row][col][k] = ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> pizza = {"A..", "AAA", "..."};
    int k = 3;

    cout << obj.ways(pizza, k) << endl;

    return 0;
}