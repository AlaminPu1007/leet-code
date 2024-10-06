#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int stoneGameII(vector<int> &piles)
  {
    int n = piles.size();
    unordered_map<string, int> cache;

    return getAliceMaxStones(true, 0, 1, n, piles, cache);
  }

private:
  int getAliceMaxStones(bool alice, int idx, int m, int n, vector<int> &piles, unordered_map<string, int> &cache)
  {
    // handle the base case
    if (idx >= n)
      return 0;

    string key = to_string(alice) + "_" + to_string(idx) + "_" + to_string(m);

    if (cache.find(key) != cache.end())
      return cache[key];

    int res = alice ? 0 : INT_MAX;
    int totalCount = 0;

    for (int i = 1; i <= (2 * m); i++)
    {
      if (idx + i > n)
        break;

      totalCount += piles[idx + i - 1];

      if (alice)
        res = max(res, totalCount + getAliceMaxStones(false, idx + i, max(m, i), n, piles, cache));

      // give bob as much as possible minimum value

      else
        res = min(res, getAliceMaxStones(true, idx + i, max(m, i), n, piles, cache));
    }
    return cache[key] = res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 7, 9, 4, 4};
  cout << obj.stoneGameII(arr) << endl;
  return 0;
}