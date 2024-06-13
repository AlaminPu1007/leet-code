#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxSubarrayLength(vector<int> &nums, int k)
  {

    int n = nums.size();
    unordered_map<int, int> Map;
    int ans = 0;
    int left = 0;

    for (int i = 0; i < n; i++)
    {
      // insert item into map
      Map[nums[i]]++;

      while (Map[nums[i]] > k)
      {
        Map[nums[left]]--;
        left++;
      }

      ans = max(ans, i - left + 1);
    }

    return ans;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 4, 4, 3};
  // output should be 6
  cout << obj.maxSubarrayLength(arr, 1) << endl;
  return 0;
}