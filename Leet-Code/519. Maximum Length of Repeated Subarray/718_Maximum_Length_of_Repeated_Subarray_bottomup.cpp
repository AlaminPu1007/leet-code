/*
  This solution will give us "Memory Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int ans = 0;

public:
  int findLength(vector<int> &nums1, vector<int> &nums2)
  {
    int n = nums1.size(), m = nums2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int res = 0;

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < m + 1; j++)
      {
        if (nums1[i - 1] == nums2[j - 1])
        {
          dp[i][j] = 1 + dp[i - 1][j - 1];
          res = max(res, dp[i][j]);
        }

        else
          dp[i][j] = 0;
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;

  vector<int> nums1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, nums2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  cout << obj.findLength(nums1, nums2) << endl;
  return 0;
}