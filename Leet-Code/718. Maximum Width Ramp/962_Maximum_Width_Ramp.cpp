#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxWidthRamp(vector<int> &nums)
  {
    int n = nums.size();
    int res = 0;
    vector<int> maxSeen(n, 0);
    int value = nums[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
      value = max(value, nums[i]);
      maxSeen[i] = value;
    }

    int left = 0;

    for (int i = 0; i < n; i++)
    {
      while (left < n && nums[left] > maxSeen[i])
        left++;

      res = max(res, i - left);
    }
    return res;
  }
};

int main(void)
{
  vector<int> arr = {6, 0, 8, 2, 1, 5};
  Solution obj;
  cout << obj.maxWidthRamp(arr) << endl;
  return 0;
}