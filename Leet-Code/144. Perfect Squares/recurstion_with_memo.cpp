#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[10001];

    int numSquares(int n)
    {
        memset(dp, -1, sizeof(dp));

        return bottomUpApproach(n);
    }

private:
    int bottomUpApproach(int n)
    {
        if (n == 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int minCount = INT_MAX;

        for (int i = 1; i * i <= n; i++)
        {
            int result = 1 + bottomUpApproach((n - i * i));
            minCount = min(minCount, result);
        }
        return dp[n] = minCount;
    }
};

int main(void)
{
    Solution obj;
    int n = 12;
    cout << obj.numSquares(n) << endl;
    return 0;
}