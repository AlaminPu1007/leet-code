/**
 * Naive of brute force approach, it will give us TLE(Time limit exceed)
 * Accepted
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int coinChange(vector<int> &coins, int amount)
  {
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));

    int res = DFS(n - 1, coins, amount, dp);
    return res == (INT_MAX - 1) ? -1 : res;
  }

private:
  int DFS(int i, vector<int> &arr, int amount, vector<vector<int>> &dp)
  {
    // handle the valid base case
    if (amount == 0)
      return 0;

    // handle base case with in valid response
    if (i < 0 || amount < 0)
      return INT_MAX - 1;

    // return from the cache
    if (dp[i][amount] != -1)
      return dp[i][amount];

    // to avoid sign integer overflow
    int includeCoin = INT_MAX - 1;

    if (arr[i] <= amount)
    {
      int temp = DFS(i, arr, amount - arr[i], dp);

      if (temp != INT_MAX - 1)
        includeCoin = 1 + temp;
    }

    return dp[i][amount] = min(includeCoin, DFS(i - 1, arr, amount, dp));
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