/*
  Find the largest longest common subsequence between two string
  Then, construct the super-sequence using the dp table
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string shortestCommonSupersequence(string str1, string str2)
  {
    int n = str1.size(), m = str2.size();
    string ans = "";

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < m + 1; j++)
      {
        if (str1[i - 1] == str2[j - 1])

          dp[i][j] = 1 + dp[i - 1][j - 1];

        else

          dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      }
    }

    int i = n, j = m;

    while (i > 0 && j > 0)
    {
      if (str1[i - 1] == str2[j - 1])
      {
        ans += str1[i - 1];
        i--;
        j--;
      }
      else if (dp[i][j - 1] > dp[i - 1][j])
      {
        ans += str2[j - 1];
        j--;
      }
      else
      {
        ans += str1[i - 1];
        i--;
      }
    }

    while (i > 0)
    {
      ans += str1[i - 1];
      i--;
    }

    while (j > 0)
    {
      ans += str2[j - 1];
      j--;
    }

    reverse(ans.begin(), ans.end());

    return ans;
  }
};

int main(void)
{
  Solution obj;
  string str1 = "bbbaaaba", str2 = "bbababbb";
  cout << obj.shortestCommonSupersequence(str1, str2) << endl;
  return 0;
}