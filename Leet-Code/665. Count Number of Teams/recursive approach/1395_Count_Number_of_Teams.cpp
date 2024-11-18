
/**
 * This is a recursive approach, We will perform recursive approach to check every possible subsequence that will have exact length 3.
 * Note: In mathematics, a subsequence of a given sequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numTeams(vector<int> &rating)
  {
    int n = rating.size();
    int res = 0;

    unordered_map<string, int> cache;

    // iterate over the all element of the array
    for (int i = 0; i < n; i++)
    {
      // perform recursive approach for increasing order
      res += validatedTeam(i, 1, 1, rating, cache);

      // perform recursive approach for decreasing order
      res += validatedTeam(i, 0, 1, rating, cache);
    }

    return res;
  }

private:
  int validatedTeam(int start_idx, bool isIncreasing, int count, vector<int> &rating, unordered_map<string, int> &cache)
  {
    // handle the base case for boundary
    if (start_idx >= rating.size())
      return 0;

    // handle the base case
    if (count == 3)
      return 1;

    string key = to_string(start_idx) + "_" + to_string(isIncreasing) + "_" + to_string(count);

    // serve from cache
    if (cache.find(key) != cache.end())
      return cache[key];

    int res = 0;

    // iterate over the next possible subsequence
    for (int j = start_idx + 1; j < rating.size(); j++)
    {
      if (isIncreasing && rating[j] > rating[start_idx])
        res += validatedTeam(j, isIncreasing, count + 1, rating, cache);

      else if (!isIncreasing && rating[j] < rating[start_idx])
        res += validatedTeam(j, isIncreasing, count + 1, rating, cache);
    }

    cache[key] = res;

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 5, 3, 4, 1};
  cout << obj.numTeams(arr) << endl;
  return 0;
}