#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long maximumValueSum(vector<int> &nums, int k, vector<vector<int>> &edges)
  {
    long long res = 0;
    int n = nums.size();

    // this will help us to identify which pairs should have to xor
    // that will maximize the results
    vector<int> delta(n, 0);

    for (int i = 0; i < n; i++)
    {
      // for total sum with default nums
      res += nums[i];

      // calculate the delta after xor
      delta[i] = (nums[i] ^ k) - nums[i];
    }

    // cout << res << endl;
    // for (auto item : delta)
    //   cout << item << " ";
    cout << endl;

    // to get the maximum result if we some how get the maximum value in the begin
    // of the array, that would be help full. that's we sort the array
    sort(delta.begin(), delta.end(), greater<int>());

    for (int i = 0; i < n - 1; i += 2)
    {
      int pathXor = (delta[i] + delta[i + 1]);
      // if pathXor give us them positive result, then sum up can be give us
      // maximum result
      if (pathXor > 0)
        res += pathXor;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> nums = {2, 3};
  int k = 7;
  vector<vector<int>> edges = {{0, 1}};
  cout << obj.maximumValueSum(nums, k, edges) << endl;
  return 0;
}