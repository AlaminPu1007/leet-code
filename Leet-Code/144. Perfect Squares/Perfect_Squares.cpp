#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSquares(int n)
    {

        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            int minCount = INT_MAX;
            for (int num = 1; num <= sqrt(i); num++)
            {
                int sqNum = num * num;
                int curCount = 1 + dp[i - sqNum];
                minCount = min(minCount, curCount);
            }
            dp[i] = minCount;
        }

        return dp[n];
    }
};

int main(void)
{
    Solution obj;
    int res = obj.numSquares(12);
    cout << res << endl;
    return 0;
}