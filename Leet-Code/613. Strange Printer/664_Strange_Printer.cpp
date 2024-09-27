#include <bits/stdc++.h>
using namespace std;

class Solution
{
  vector<vector<int>> dp;

public:
  int strangePrinter(string s)
  {
    int r = s.size() - 1;
    dp.resize(r + 2, vector<int>(r + 2, -1));
    return DFS(0, r, s);
  }

private:
  int DFS(int l, int r, string &s)
  {

    if (l == r)
      return 1;

    else if (l > r)
      return 0;

    if (dp[l][r] != -1)
      return dp[l][r];

    int i = l + 1;

    // found out all matching characters
    while (i <= r && s[i] == s[l])
      i++;

    if (i == r + 1)
      return 1;

    int ans1 = 1 + DFS(i, r, s);

    int ans2 = INT_MAX;

    for (int j = i; j <= r; j++)
    {
      if (s[l] == s[j])
        ans2 = min(ans2, DFS(i, j - 1, s) + DFS(j, r, s));
    }
    return dp[l][r] = min(ans1, ans2);
  }
};

int main(void)
{
  Solution obj;
  string s = "aaabbb";
  cout << obj.strangePrinter(s) << endl;
  return 0;
}