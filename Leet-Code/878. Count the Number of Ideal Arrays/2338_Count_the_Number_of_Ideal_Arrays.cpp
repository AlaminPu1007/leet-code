#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int MOD = 1e9 + 7;

public:
    int idealArrays(int n, int maxValue)
    {
        int ans = 0;
        vector<vector<int>> dp(21, vector<int>(maxValue + 1, -1));
        vector<vector<int>> memo(n + 1, vector<int>(15, 0));

        for (int i = 1; i <= maxValue; i++)
        {
            ans = (ans % MOD + Solved(i, 1, n, maxValue, dp, memo) % MOD) % MOD;
        }

        return ans % MOD;
    }

private:
    int Solved(int value, int len, int n, int maxValue, vector<vector<int>> &dp, vector<vector<int>> &memo)
    {

        // handle the base case
        if (n == len)
            return 1;

        if (dp[len][value] != -1)
            return dp[len][value];

        int j = 2;
        int ans = 0;
        int flag = 0;

        while (value * j <= maxValue)
        {
            ans = (ans % MOD + Solved(value * j, len + 1, n, maxValue, dp, memo) % MOD) % MOD;
            j++;

            if (value * j > maxValue)
            {
                ans = (ans % MOD + Comb(n - 1, len - 1, memo) % MOD) % MOD;
            }
            flag = 1;
        }

        if (flag == 0)
        {
            if (value * j > maxValue)
            {
                ans = (ans % MOD + Comb(n - 1, len - 1, memo) % MOD) % MOD;
            }
        }

        return dp[len][value] = ans % MOD;
    }

private:
    int Comb(int n, int k, vector<vector<int>> &memo)
    {
        if (k > n)
            return 0;

        if (k == 0 || n == k)
            return 1;

        if (memo[n][k] != 0)
            return memo[n][k];

        memo[n][k] = (Comb(n - 1, k, memo) + Comb(n - 1, k - 1, memo)) % MOD;

        return memo[n][k];
    }
};

int main(void)
{
    Solution obj;
    cout << obj.idealArrays(2, 5) << endl;

    return 0;
}