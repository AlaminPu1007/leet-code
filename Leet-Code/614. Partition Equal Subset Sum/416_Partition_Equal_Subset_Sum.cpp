/**
 * This is a brute force approach, with time limit exceed
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool canPartition(vector<int> &nums)
  {
    int n = nums.size();
    int sum = 0;

    for (auto item : nums)
      sum += item;

    if (sum % 2 != 0)
      return false;

    return DFS(nums, n - 1, sum / 2);
  }

private:
  bool DFS(vector<int> &arr, int n, int targetSum)
  {
    // define the base case
    if (targetSum == 0)
      return true;

    else if (n < 0 || targetSum < 0)
      return false;

    if (arr[n] <= targetSum)
    {
      return DFS(arr, n - 1, targetSum - arr[n]) || DFS(arr, n - 1, targetSum);
    }
    else
      return DFS(arr, n - 1, targetSum);
  }
};

int main(void)
{
  Solution obj;
  vector<int> nums = {1, 5, 11, 5};
  cout << obj.canPartition(nums) << endl;
  return 0;
};