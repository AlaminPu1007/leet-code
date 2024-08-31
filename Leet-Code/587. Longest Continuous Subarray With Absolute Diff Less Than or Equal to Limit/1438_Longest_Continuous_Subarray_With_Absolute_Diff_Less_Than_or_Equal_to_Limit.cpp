/*
  We will solved this problem using sliding window technique.
  The idea behind of this solution is, if current window max and min item difference is grater than the limit,
  then we will removed the invalid item from the current window by the help of priority_queue.

  Time-Complexity: `O(n * log(n))`
  Space-Complexity: `O(n)`
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  typedef pair<int, int> iPair;

public:
  int longestSubarray(vector<int> &nums, int limit)
  {
    int n = nums.size();
    int res = 0;

    // define a minHeap
    priority_queue<iPair> maxHeap;

    // define a maxHeap
    priority_queue<iPair, vector<iPair>, greater<iPair>> minHeap;

    int left = 0;

    for (int i = 0; i < n; i++)
    {
      // get the current window max, min value with constant amount of time
      maxHeap.push({nums[i], i});
      minHeap.push({nums[i], i});

      // removed unsatisfied value from current window
      while (maxHeap.top().first - minHeap.top().first > limit)
      {
        // update left point with `minimum index + 1` from them
        left = min(maxHeap.top().second, minHeap.top().second) + 1;

        // removed invalid item from maxHeap, that will be no longer part of the current window
        while (maxHeap.top().second < left)
          maxHeap.pop();

        // removed invalid item from minHeap, that will be no longer part of the current window
        while (minHeap.top().second < left)
          minHeap.pop();
      }

      // update valid window as a result
      res = max(res, i - left + 1);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {4, 2, 2, 2, 4, 4, 2, 2};
  int limit = 0;

  cout << obj.longestSubarray(arr, limit) << endl;

  return 0;
}