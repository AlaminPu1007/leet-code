#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int subsetXORSum(vector<int> &nums)
  {
    int n = nums.size();

    return subsetLists(nums, 0, n, 0);
  }

private:
  int subsetLists(vector<int> arr, int i, int n, int xorSum)
  {
    // base case of recursion
    if (i == n)
    {
      return xorSum;
    }

    // peak that element into subset
    int peakItem = subsetLists(arr, i + 1, n, xorSum ^ arr[i]);

    // not peak the element
    int notPeakItem = subsetLists(arr, i + 1, n, xorSum);

    return peakItem + notPeakItem;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {5, 1, 3};
  cout << obj.subsetXORSum(arr) << endl;
  return 0;
}