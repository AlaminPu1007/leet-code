/**
 * Naive of brute force approach, it will give us TLE(Time limit exceed)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int coinChange(vector<int> &coins, int amount)
  {
    int n = coins.size();
    int res = DFS(n - 1, coins, amount, 0);
    return res == INT_MAX ? -1 : res;
  }

private:
  int DFS(int i, vector<int> &arr, int amount, int count)
  {
    // handle the valid base case
    if (amount == 0)
      return count;

    // handle base case with in valid response
    if (i < 0 || amount < 0)
      return INT_MAX;

    if (arr[i] <= amount)
      return min(DFS(i, arr, amount - arr[i], count + 1), DFS(i - 1, arr, amount, count));

    else
      return DFS(i - 1, arr, amount, count);
  }
};

int main(void)
{
  Solution obj;
  vector<int> coins = {1, 2, 5};
  int amount = 11;
  cout << obj.coinChange(coins, amount) << endl;
  return 0;
}