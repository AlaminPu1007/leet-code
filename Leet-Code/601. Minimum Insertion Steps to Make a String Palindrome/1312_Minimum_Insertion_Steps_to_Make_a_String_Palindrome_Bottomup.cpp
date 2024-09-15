
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minInsertions(string s)
  {
    int n = s.size();
    string temp = s;
    reverse(temp.begin(), temp.end());
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < n + 1; j++)
      {
        if (s[i - 1] == temp[j - 1])
          dp[i][j] = 1 + dp[i - 1][j - 1];

        else
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }

    return (n - dp[n][n]);
  }
};

int main(void)
{
  Solution obj;
  string s = "dyyuyabzkqaybcspq";
  cout << obj.minInsertions(s) << endl;
  return 0;
}