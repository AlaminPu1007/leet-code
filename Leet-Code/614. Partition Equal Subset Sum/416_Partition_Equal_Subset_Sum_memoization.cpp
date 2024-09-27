/**
 * Accept with memoization
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool canPartition(vector<int> &nums)
  {
    int n = nums.size();

    int sum = 0;
    for (auto item : nums)
      sum += item;

    if (sum % 2 != 0)
      return false;

    vector<vector<int>> dp(n, vector<int>(sum / 2 + 1, -1));

    return DFS(nums, n - 1, sum / 2, dp);
  }

private:
  bool DFS(vector<int> &arr, int n, int targetSum, vector<vector<int>> &dp)
  {
    // define the base case
    if (targetSum == 0)
      return true;

    else if (n < 0 || targetSum < 0)
      return false;

    // If the state has been computed before
    if (dp[n][targetSum] != -1)
      return dp[n][targetSum];

    // Decision to include or exclude the current element
    if (arr[n] <= targetSum)
    {
      dp[n][targetSum] = DFS(arr, n - 1, targetSum - arr[n], dp) || DFS(arr, n - 1, targetSum, dp);
    }
    else
    {
      dp[n][targetSum] = DFS(arr, n - 1, targetSum, dp);
    }

    return dp[n][targetSum];
  }
};

int main(void)
{
  Solution obj;
  vector<int> nums = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 99, 97};
  cout << obj.canPartition(nums) << endl;
  return 0;
}