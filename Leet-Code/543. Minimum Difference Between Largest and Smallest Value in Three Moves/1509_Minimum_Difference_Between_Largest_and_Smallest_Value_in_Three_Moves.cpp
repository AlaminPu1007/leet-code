#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minDifference(vector<int> &nums)
  {
    int n = nums.size();
    int res = INT_MAX;

    if (n <= 4)
      return 0;

    // sort the array
    sort(nums.begin(), nums.end());

    for (int l = 0; l < 4; l++)
    {
      int r = n - 4 + l;
      res = min(res, nums[r] - nums[l]);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 3, 4, 7, 8, 12};
  cout << obj.minDifference(arr) << endl;
  return 0;
}