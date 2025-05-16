
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numTilings(int n)
    {
        if (n == 1 || n == 2)
            return n;

        if (n == 3)
            return 5;

        vector<int> dp(n + 1, 0);

        // initialized dp array
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;

        for (int i = 4; i <= n; i++)
            dp[i] = (2 * dp[i - 1] % MOD + dp[i - 3] % MOD) % MOD;

        return dp[n];
    }
};

int main(void)
{

    Solution obj;
    cout << obj.numTilings(5);

    return 0;
}