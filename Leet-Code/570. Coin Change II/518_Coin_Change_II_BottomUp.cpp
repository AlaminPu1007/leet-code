/*
  Bottom Up Approach or Tabulation approach
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int change(int amount, vector<int> &coins)
  {
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

    // Base case: if amount is 0, there is one way to make change (use no coins)
    for (int i = 0; i < n + 1; i++)
      dp[i][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < amount + 1; j++)
      {
        // Include the current coin if it is not greater than the amount.
        if (coins[i - 1] <= j)
          dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];

        else
          dp[i][j] = dp[i - 1][j];
      }
    }

    return dp[n][amount];
  }
};

int main(void)
{
  Solution obj;
  int amount = 5;
  vector<int> coins = {1, 2, 5};
  cout << obj.change(amount, coins) << endl;
  return 0;
}