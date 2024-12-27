/**
 * To solved this problem, we will apply a counting sort approach, after getting each paris distance
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int smallestDistancePair(vector<int> &nums, int k)
  {
    int maxNum = *max_element(nums.begin(), nums.end()), n = nums.size();
    vector<int> disArr(maxNum + 1, 0);

    // generate all possible pairs
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int pairs = abs(nums[i] - nums[j]);
        disArr[pairs]++;
      }
    }

    for (int i = 0; i <= maxNum; i++)
    {
      k -= disArr[i];
      if (k <= 0)
        return i;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 6, 1};
  int k = 3;
  cout << obj.smallestDistancePair(arr, k) << endl;
  return 0;
}