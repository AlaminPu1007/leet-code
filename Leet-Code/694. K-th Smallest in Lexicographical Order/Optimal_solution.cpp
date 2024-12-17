
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int findKthNumber(int n, int k)
  {

    int cur = 1, i = 1;

    while (i < k)
    {
      long long steps = count(cur, n); // Use long long for steps to prevent overflow

      // if current steps are less than k, move to the next number
      if (steps + i <= k)
      {
        cur = cur + 1; // Move to the next lexicographical number
        i += steps;    // Skip these many steps
      }
      // Otherwise, go deeper in the tree
      else
      {
        cur *= 10; // Go to the next level (deeper in the prefix tree)
        i++;
      }
    }

    return cur;
  }

private:
  long long count(long long cur, int n) // Change to long long to handle large numbers
  {
    long long res = 0;
    long long nei = cur + 1;

    while (cur <= n)
    {
      // get total step from current 2 num at same level
      res += min(nei, (long long)n + 1) - cur;
      nei *= 10;
      cur *= 10;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  int n = 681692778, k = 351251360;
  cout << obj.findKthNumber(n, k) << endl;
  return 0;
}