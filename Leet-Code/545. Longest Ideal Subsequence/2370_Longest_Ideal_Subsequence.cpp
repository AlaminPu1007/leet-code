/**
 * This is simple brute force approach
 * Time Limit Exceeded
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestIdealString(string s, int k)
  {
    int n = s.size();
    int res = 1;

    vector<int> t(n, 1);

    for (int i = 0; i < n; i++)
    {
      for (int j = i - 1; j >= 0; j--)
        if (abs(s[i] - s[j]) <= k)
          t[i] = max(t[i], t[j] + 1);

      res = max(res, t[i]);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "acfgdb";
  int k = 2;
  cout << obj.longestIdealString(s, k) << endl;
  return 0;
}