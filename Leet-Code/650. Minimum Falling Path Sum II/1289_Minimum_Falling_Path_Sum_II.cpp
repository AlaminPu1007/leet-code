#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<int> prv_dp(m, INT_MAX);

        int res = INT_MAX;

        for (int i = 0; i < n; i++)
            prv_dp[i] = grid[0][i];

        for (int i = 1; i < n; i++)
        {
            vector<int> next_dp(m, INT_MAX);

            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    if (j != k)
                        next_dp[j] = min(next_dp[j], prv_dp[k] + grid[i][j]);
                }
            }
            prv_dp = next_dp;
        }

        for (auto item : prv_dp)
            res = min(res, item);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    cout << obj.minFallingPathSum(grid) << endl;
    return 0;
}