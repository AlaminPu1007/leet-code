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

    // define a multiset that is the combination of minHeap and maxHeap
    multiset<int> mls;
    int left = 0;

    for (int i = 0; i < n; i++)
    {
      // put current item into multiset
      mls.insert(nums[i]);

      if (*mls.rbegin() - *mls.begin() > limit)
      {
        mls.erase(mls.find(nums[left]));
        left++;
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