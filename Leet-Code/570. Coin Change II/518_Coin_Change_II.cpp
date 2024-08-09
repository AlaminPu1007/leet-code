/*
  Brute force approach using recursion
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

    return DFS(amount, coins, n - 1);
  }

private:
  int DFS(int amount, vector<int> &arr, int i)
  {
    if (amount == 0)
      return 1;

    if (i < 0 || amount < 0)
      return 0;

    if (arr[i] <= amount)
    {
      return DFS(amount - arr[i], arr, i) + DFS(amount, arr, i - 1);
    }
    else
      return DFS(amount, arr, i - 1);
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