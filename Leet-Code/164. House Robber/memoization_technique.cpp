#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int rob(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> dp(n, -1);
    if (n == 0)
      return 0;

    return DFS(n - 1, nums, dp);
  }

private:
  int DFS(int i, vector<int> &nums, vector<int> &dp)
  {

    if (i == 0)
      return nums[i];

    if (i < 0)
      return 0;

    if (dp[i] != -1)
      return dp[i];

    // if we pick the current item
    int pick = nums[i] + DFS(i - 2, nums, dp);

    // if not choosen the current item
    int notPick = 0 + DFS(i - 1, nums, dp);

    return dp[i] = max(pick, notPick);
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 7, 9, 3, 1};
  cout << obj.rob(arr) << endl;
  return 0;
}