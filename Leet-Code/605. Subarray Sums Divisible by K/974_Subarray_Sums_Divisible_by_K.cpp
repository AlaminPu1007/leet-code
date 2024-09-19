#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int subarraysDivByK(vector<int> &nums, int k)
  {
    int n = nums.size();
    unordered_map<int, int> reminderCount;

    // count empty sum
    reminderCount[0] = 1;

    // vector<int> prefixSum(n + 1);
    int res = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
      sum += nums[i];
      int rem = sum % k;

      // Adjust negative remainders to be positive
      if (rem < 0)
        rem += k;

      if (reminderCount.find(rem) != reminderCount.end())
        res += reminderCount[rem];

      reminderCount[rem] += 1;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {-1, 2, 9};
  int k = 2;
  cout << obj.subarraysDivByK(arr, k) << endl;
  return 0;
}