#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minSubarray(vector<int> &nums, int p)
  {
    int n = nums.size();

    unordered_map<int, int> Map;
    // {prefix_mod, index}
    Map.insert({0, -1});

    int total_sum = 0;

    for (auto item : nums)
      total_sum = (total_sum + item) % p;

    if (total_sum % p == 0)
      return 0;

    int res = INT_MAX;

    // we need this much of prefix mod sum, to get others sum remaining with divisible by p
    int target = total_sum % p;
    int cur_sum = 0;

    for (int i = 0; i < n; i++)
    {
      // get prefix sum of mod
      cur_sum = (cur_sum + nums[i]) % p;

      // Calculate what we need to remove
      // to avoid negative, first we add it with p, then mod by p.
      // we know our mod prefix sum wont be grater than the p
      int needed = (cur_sum - target + p) % p;

      if (Map.find(needed) != Map.end())
      {
        res = min(res, i - Map[needed]);
      }
      Map[cur_sum] = i;
    }

    return res == n ? -1 : res;
  }
};

int main(void)
{
  vector<int> arr = {3, 1, 4, 2};
  int p = 6;
  Solution obj;
  cout << obj.minSubarray(arr, p) << endl;
  return 0;
}