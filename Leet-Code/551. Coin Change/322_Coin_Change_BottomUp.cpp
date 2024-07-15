/**
 * Bottom up approach with accepted
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int coinChange(vector<int> &coins, int amount)
  {
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, INT_MAX - 1));

    for (int i = 0; i < n + 1; i++)
      dp[i][0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < amount + 1; j++)
      {
        if (coins[i - 1] <= j)
          dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);

        else
          dp[i][j] = dp[i - 1][j];
      }
    }

    return dp[n][amount] == INT_MAX - 1 ? -1 : dp[n][amount];
  }
};

int main(void)
{
  Solution obj;
  vector<int> coins = {411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422};
  int amount = 9864;
  cout << obj.coinChange(coins, amount) << endl;
  return 0;
}