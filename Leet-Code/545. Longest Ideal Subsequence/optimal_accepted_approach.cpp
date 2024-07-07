#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestIdealString(string s, int k)
  {
    int n = s.size();
    int res = 1;

    vector<int> t(26, 0);

    for (int i = 0; i < n; i++)
    {
      int curChar = s[i] - 'a';
      int left = max(0, curChar - k);   // to avoid the boundary, left at most can a = 0
      int right = min(25, curChar + k); // right at most can be z = 25

      // for current character traverse it's boundary within k,
      // and get the most max possible subsequence
      int longest = 0;
      for (int j = left; j <= right; j++)
      {
        longest = max(longest, t[j]);
      }

      // get max subsequence for current item
      t[curChar] = max(t[curChar], longest + 1);

      res = max(res, t[curChar]);
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