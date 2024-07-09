/*
  This is Bottomup or Tabulation approach.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minDistance(string word1, string word2)
  {
    int n = word1.size(), m = word2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < m + 1; j++)
      {
        // for matching character
        if (word1[i - 1] == word2[j - 1])
          dp[i][j] = 1 + dp[i - 1][j - 1];

        else
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }

    int lcs_length = dp[n][m];

    // required no of deletion
    int noOfDeletion = (n - lcs_length);

    // required no of insertion
    int noOfInsertion = (m - lcs_length);

    return (noOfInsertion + noOfDeletion);
  }
};

int main(void)
{
  Solution obj;
  string word1 = "dinitrophenylhydrazine", word2 = "benzalphenylhydrazone";
  cout << obj.minDistance(word1, word2) << endl;
  return 0;
}