
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numTilings(int n)
    {
        vector<int> dp(n + 1, -1);
        return Solve(n, dp);
    }

private:
    int Solve(int n, vector<int> &dp)
    {
        // handle the base cases
        if (n == 1 || n == 2)
            return n;

        if (n == 3)
            return 5;

        if (dp[n] != -1)
            return dp[n];

        // now calculate recursively the remaining sub-problems using the equations
        // ex: f(n) = 2 * f(n-1) + f(n-3);
        return dp[n] = (2 * Solve(n - 1, dp) % MOD + Solve(n - 3, dp) % MOD) % MOD;
    }
};

int main(void)
{

    Solution obj;
    cout << obj.numTilings(5);

    return 0;
}