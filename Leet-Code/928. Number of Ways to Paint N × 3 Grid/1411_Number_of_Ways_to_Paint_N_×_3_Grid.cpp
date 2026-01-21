#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;
    vector<string> str = {"RYG", "RGY", "RYR", "RGR", "YRG", "YGR", "YGY", "YRY", "GRY", "GYR", "GRG", "GYG"};

public:
    int numOfWays(int n)
    {
        int res = 0;
        vector<vector<int>> dp(n + 1, vector<int>(13, -1));

        for (int i = 0; i < 12; i++)
        {
            res = (res + Solve(n - 1, i, dp)) % MOD;
        }

        return res;
    }

private:
    int Solve(int n, int prv, vector<vector<int>> &dp)
    {
        if (n == 0)
            return 1;

        if (dp[n][prv] != -1)
            return dp[n][prv];

        int res = 0;

        string last = str[prv];

        for (int curr = 0; curr < 12; curr++)
        {
            if (curr == prv)
                continue;

            string currPat = str[curr];
            bool conflict = false;

            for (int col = 0; col < 3; col++)
            {
                if (currPat[col] == last[col])
                {
                    conflict = true;
                    break;
                }
            }

            if (!conflict)
            {
                res = (res + Solve(n - 1, curr, dp)) % MOD;
            }
        }

        return dp[n][prv] = res;
    }
};

int main(void)
{
    Solution obj;
    int n = 1;

    cout << obj.numOfWays(n) << endl;

    return 0;
}