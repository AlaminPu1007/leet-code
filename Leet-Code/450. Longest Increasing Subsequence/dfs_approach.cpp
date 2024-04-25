// https://leetcode.com/problems/longest-increasing-subsequence/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int dp[2501][2501]; // Member variable for memoization

public:
  int lengthOfLIS(vector<int> &nums)
  {
    int n = nums.size();
    memset(dp, -1, sizeof(dp)); // Initialize dp array
    return DFS(0, -1, n, nums);
  }

private:
  int DFS(int i, int p, int n, const vector<int> &nums) // Pass nums by reference
  {
    if (i >= n)
      return 0;

    if (p != -1 && dp[i][p] != -1)
      return dp[i][p];

    int take = 0, skip = 0;

    if ((p == -1) || nums[i] > nums[p])
      take = 1 + DFS(i + 1, i, n, nums);

    skip = DFS(i + 1, p, n, nums);

    if (p != -1)
    {
      dp[i][p] = max(take, skip);
    }

    return max(take, skip);
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};
  cout << obj.lengthOfLIS(arr) << endl;

  return 0;
}
