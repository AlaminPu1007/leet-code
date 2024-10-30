#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int MOD = 1e9 + 7;

public:
  int checkRecord(int n)
  {
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(3, vector<int>(4, -1)));
    return DFS(n, 0, 0, dp);
  }

private:
  int DFS(int n, int countAbsence, int countLate, vector<vector<vector<int>>> &dp)
  {
    // handle invalid case
    if (countAbsence >= 2 || countLate >= 3)
      return 0;

    if (n == 0)
      return 1;

    if (dp[n][countAbsence][countLate] != -1)
      return dp[n][countAbsence][countLate];

    int count = 0;

    // count present
    // initialize late count with 0,(mark as default)
    count = DFS(n - 1, countAbsence, 0, dp) % MOD;

    // count absence
    // initialize late count with 0,(mark as default)
    count = (count + DFS(n - 1, countAbsence + 1, 0, dp)) % MOD;

    // count late

    count = (count + DFS(n - 1, countAbsence, countLate + 1, dp)) % MOD;

    return dp[n][countAbsence][countLate] = count;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.checkRecord(10101) << endl;
  return 0;
}