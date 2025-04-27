#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxValueOfCoins(vector<vector<int>> &piles, int k)
    {
        int n = piles.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));

        return Solved(0, piles, k, n, dp);
    }

private:
    int Solved(int i, vector<vector<int>> &piles, int k, int n, vector<vector<int>> &dp)
    {
        if (i == n)
            return 0;

        // if this sub-problem is already solved
        if (dp[i][k] != -1)
        {
            return dp[i][k];
        }

        // If we skip current piles
        int res = Solved(i + 1, piles, k, n, dp);

        int curSum = 0;

        // explore all possible piles that we will choose
        for (int j = 0; j < min(k, (int)piles[i].size()); j++)
        {
            // add current coin into wallets
            curSum += piles[i][j];

            // now explore next piles after taking a coins from current piles[i]
            if (k - (j + 1) >= 0)
            {
                res = max(res, curSum + Solved(i + 1, piles, k - (j + 1), n, dp));
            }
        }

        return dp[i][k] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> piles = {{1, 100, 3}, {7, 8, 9}};
    int k = 2;

    cout << obj.maxValueOfCoins(piles, k) << endl;

    return 0;
}