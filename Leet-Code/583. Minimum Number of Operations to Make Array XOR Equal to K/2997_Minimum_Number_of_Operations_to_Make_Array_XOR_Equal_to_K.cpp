#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minOperations(vector<int> &nums, int k)
  {
    int finalXor = 0;

    // XOR of all integers in the array.
    for (auto item : nums)
      finalXor ^= item;

    int count = 0;

    while (k || finalXor)
    {
      // k % 2 returns the rightmost bit in k,
      // finalXor % 2 returns the rightmost bit in finalXor.

      // Increment counter, if the bits don't match.
      if (k % 2 != finalXor % 2)
        count++;

      k /= 2;
      finalXor /= 2;
    }
    return count;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 1, 3, 4};
  int k = 1;
  cout << obj.minOperations(arr, k) << endl;
  return 0;
}