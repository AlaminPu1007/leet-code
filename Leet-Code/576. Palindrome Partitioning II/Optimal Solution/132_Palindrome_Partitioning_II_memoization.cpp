/*
  An Recursive approach with memoization
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int dp[2001];

public:
  int minCut(string s)
  {
    int n = s.size();
    memset(dp, -1, sizeof(dp));

    return recursive_mcm(s, 0, n - 1);
  }

private:
  int recursive_mcm(string &s, int i, int j)
  {
    // Base case: if the substring is empty or a single character
    if (i >= j)
      return 0;

    // If the substring (i to j) is a palindrome, no cuts are needed
    if (isPalinDrome(s, i, j))
      return 0;

    if (dp[i] != -1)
      return dp[i];

    int ans = INT_MAX;

    for (int k = i; k < j; k++)
    {
      // if left subtree is already palindrome, there is no need to make any further recursive call
      // it will increase code efficient
      // make call off of left subtree, due to overcome Time limit exceed error issue

      if (isPalinDrome(s, i, k))
      {
        int tempAns = 1 + recursive_mcm(s, k + 1, j);

        ans = min(ans, tempAns);
      }
    }
    return dp[i] = ans;
  }

private:
  bool isPalinDrome(string &s, int i, int j)
  {
    while (i < j)
    {
      if (s[i] != s[j])
        return false;

      i++;
      j--;
    }
    return true;
  }
};

int main(void)
{
  Solution obj;
  string s = "nitin";
  cout << obj.minCut(s) << endl;
  return 0;
}