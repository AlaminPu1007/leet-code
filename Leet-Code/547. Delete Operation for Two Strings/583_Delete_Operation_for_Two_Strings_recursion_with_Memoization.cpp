/*
  This is Recursion + Memoization technique.
  Accepted solution
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minDistance(string word1, string word2)
  {
    int n = word1.size(), m = word2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    int lcs_length = DFS(n, word1, m, word2, dp);

    // required no of deletion
    int noOfDeletion = (n - lcs_length);

    // required no of insertion
    int noOfInsertion = (m - lcs_length);

    return (noOfInsertion + noOfDeletion);
  }

private:
  int DFS(int n, string a, int m, string b, vector<vector<int>> &dp)
  {
    // handle the base case
    if (n == 0 || m == 0)
      return 0;

    // return from cache
    if (dp[n][m] != -1)
      return dp[n][m];

    if (a[n - 1] == b[m - 1])
      dp[n][m] = 1 + DFS(n - 1, a, m - 1, b, dp);

    else
      dp[n][m] = max(DFS(n - 1, a, m, b, dp), DFS(n, a, m - 1, b, dp));

    return dp[n][m];
  }
};

int main(void)
{
  Solution obj;
  string word1 = "dinitrophenylhydrazine", word2 = "benzalphenylhydrazone";
  cout << obj.minDistance(word1, word2) << endl;
  return 0;
}