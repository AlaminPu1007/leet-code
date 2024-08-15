/*
  An Recursive approach to came up with the solution, but this solution would be give us "Time Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minCut(string s)
  {
    int n = s.size();
    return recursive_mcm(s, 0, n - 1);
  }

private:
  int recursive_mcm(string s, int i, int j)
  {
    // handle the vase case
    if (i >= j)
      return 0;

    // check (i to j) is a palindrome
    if (isPalinDrome(s, i, j))
      return 0;

    int ans = INT_MAX;

    for (int k = i; k < j; k++)
    {
      int tempAns = 1 + recursive_mcm(s, i, k) + recursive_mcm(s, k + 1, j);

      ans = min(ans, tempAns);
    }
    return ans;
  }

private:
  bool isPalinDrome(string s, int i, int j)
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
  string s = "leet";
  cout << obj.minCut(s) << endl;
  return 0;
}