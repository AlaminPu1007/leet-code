#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minExtraChar(string s, vector<string> &dictionary)
  {
    unordered_set<string> st(dictionary.begin(), dictionary.end());

    int res = 0;
    vector<int> dp(s.size() + 1, -1);

    res = Solve(s, 0, st, dp);

    return res;
  }

private:
  int Solve(string s, int i, unordered_set<string> &st, vector<int> &dp)
  {
    if (i >= s.size())
      return 0;

    if (dp[i] != -1)
      return dp[i];

    int res = 1 + Solve(s, i + 1, st, dp);

    for (int j = i; j < s.size(); j++)
    {
      string temp = s.substr(i, j - i + 1);

      if (st.count(temp) > 0)
      {
        res = min(res, Solve(s, j + 1, st, dp));
      }
    }

    return dp[i] = res;
  }
};

int main(void)
{
  string s = "leetscode";
  vector<string> dictionary = {"leet", "code", "leetcode"};
  Solution obj;
  cout << obj.minExtraChar(s, dictionary) << endl;
  return 0;
}