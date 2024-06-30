#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int specialArray(vector<int> &nums)
  {
    int n = nums.size();
    // sort the array
    sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++)
    {
      int count = getFirstItemIndex(nums, i);

      if ((n - count) == i)
        return i;
    }

    return -1;
  }

private:
  // This method will help us to get first index of that item, that grater than or equal to target
  int getFirstItemIndex(vector<int> &arr, int target)
  {
    int left = 0;
    int right = arr.size() - 1;

    int index = -1;

    while (left <= right)
    {
      int mid = (right + left) / 2;

      if (arr[mid] >= target)
      {
        index = mid;
        right = mid - 1;
      }

      else
        left = mid + 1;
    }

    return index;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {0, 0}; // [4,5,6,7]
  cout << obj.specialArray(arr) << endl;
  return 0;
}