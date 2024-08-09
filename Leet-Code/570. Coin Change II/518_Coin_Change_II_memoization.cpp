/*
  Recursive with Memoization
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int change(int amount, vector<int> &coins)
  {
    int n = coins.size();
    int res = 0;

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));

    return DFS(amount, coins, n - 1, dp);
  }

private:
  int DFS(int amount, vector<int> &arr, int i, vector<vector<int>> &dp)
  {
    if (amount == 0)
      return 1;

    if (i < 0 || amount < 0)
      return 0;

    if (dp[i][amount] != -1)
      return dp[i][amount];

    if (arr[i] <= amount)
      dp[i][amount] = DFS(amount - arr[i], arr, i, dp) + DFS(amount, arr, i - 1, dp);

    else
      dp[i][amount] = DFS(amount, arr, i - 1, dp);

    return dp[i][amount];
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