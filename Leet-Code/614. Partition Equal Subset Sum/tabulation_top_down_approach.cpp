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

    int targetSum = (sum / 2);

    int dp[n + 1][targetSum + 1];

    for (int i = 0; i < targetSum + 1; i++)
      dp[0][i] = false;

    // for targetSum = 0
    for (int i = 0; i < n + 1; i++)
      dp[i][0] = true;

    for (int i = 1; i < n + 1; i++)
    {
      // sum = 1 to (targetSum + 1)
      for (int j = 1; j < targetSum + 1; j++)
      {
        if (nums[i - 1] <= j)
          dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];

        else
          dp[i][j] = dp[i - 1][j];
      }
    }
    return dp[n][targetSum];
  }
};

int main(void)
{
  Solution obj;
  vector<int> nums = {1, 5, 11, 5};
  cout << obj.canPartition(nums) << endl;
  return 0;
}