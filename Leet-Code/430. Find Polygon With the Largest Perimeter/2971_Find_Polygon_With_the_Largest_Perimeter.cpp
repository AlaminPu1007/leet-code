
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long largestPerimeter(vector<int> &nums)
  {
    long long res = -1, total = 0;

    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
      if (total > nums[i])
        res = total + nums[i];

      total += nums[i];
    }

    return res;
  }
};

int main(void)
{
  Solution obj;

  vector<int> arr = {1, 12, 1, 2, 5, 50, 3};
  cout << obj.largestPerimeter(arr) << endl;

  return 0;
}
