#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int equalSubstring(string s, string t, int maxCost)
  {
    int n = s.size();
    int left = 0;
    int res = 0;

    int totalCost = 0;

    for (int i = 0; i < n; i++)
    {
      // count all possible cost that we can make
      totalCost += (int)abs((s[i] - 'a') - (t[i] - 'a'));

      // if total-cost exceed than maxCost,
      // start removed previously added cost
      while (totalCost > maxCost)
      {
        totalCost -= (int)abs((s[left] - 'a') - (t[left] - 'a'));
        left++;
      }

      // count the valid window length
      res = max(res, i - left + 1);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "abcd", t = "abcd";
  int maxCost = 0;
  cout << obj.equalSubstring(s, t, maxCost) << endl;
  return 0;
}