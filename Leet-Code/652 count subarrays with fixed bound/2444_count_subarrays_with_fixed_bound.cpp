#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long countSubarrays(vector<int> &nums, int minK, int maxK)
  {
    int n = nums.size();
    long long res = 0;

    int positionOfMinK = -1, positionOfMaxK = -1, positionOfCulpritIndex = -1;

    for (int i = 0; i < n; i++)
    {
      // find the position of minK
      if (minK == nums[i])
        positionOfMinK = i;

      // find the position of maxK
      if (maxK == nums[i])
        positionOfMaxK = i;

      // find position of culprit index
      if (!(minK <= nums[i] && nums[i] <= maxK))
      {
        positionOfCulpritIndex = i;
      }

      // get valid sub-arrays within (maxK and minK)

      res += max(0, (min(positionOfMinK, positionOfMaxK) - positionOfCulpritIndex));
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {978650, 978650, 978650, 68071, 52201, 68071, 186141, 978650, 978650, 267135, 68071, 717241, 242895, 68071, 582505, 978650, 68071, 68071};

  cout << obj.countSubarrays(arr, 68071, 978650) << endl; // 57

  return 0;
}