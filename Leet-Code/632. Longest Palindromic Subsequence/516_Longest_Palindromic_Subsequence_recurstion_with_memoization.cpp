/*
  This solution will be "Memory Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestPalindromeSubseq(string s)
  {
    int n = s.size();

    string newStr = s;
    reverse(newStr.begin(), newStr.end());
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    return DFS(n, s, n, newStr, dp);
  }

private:
  int DFS(int n, string a, int m, string b, vector<vector<int>> &dp)
  {
    // handle the base case
    if (n == 0 || m == 0)
      return 0;

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
  cout << obj.longestPalindromeSubseq("aaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhiiiiiiiiiijjjjjjjjjjkkkkkkkkkkllllllllllmmmmmmmmmmnnnnnnnnnnooooooooooppppppppppqqqqqqqqqqrrrrrrrrrrssssssssssttttttttttuuuuuuuuuuvvvvvvvvvvwwwwwwwwwwxxxxxxxxxxyyyyyyyyyyzzzzzzzzzzyyyyyyyyyyxxxxxxxxxxwwwwwwwwwwvvvvvvvvvvuuuuuuuuuuttttttttttssssssssssrrrrrrrrrrqqqqqqqqqqppppppppppoooooooooonnnnnnnnnnmmmmmmmmmmllllllllllkkkkkkkkkkjjjjjjjjjjiiiiiiiiiihhhhhhhhhhggggggggggffffffffffeeeeeeeeeeddddddddddccccccccccbbbbbbbbbbaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhiiiiiiiiiijjjjjjjjjjkkkkkkkkkkllllllllllmmmmmmmmmmnnnnnnnnnnooooooooooppppppppppqqqqqqqqqqrrrrrrrrrrssssssssssttttttttttuuuuuuuuuuv") << endl;
  return 0;
}