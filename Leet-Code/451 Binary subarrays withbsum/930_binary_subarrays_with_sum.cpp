
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numSubarraysWithSum(vector<int> &nums, int goal)
  {
    return helperMethod(goal, nums) - helperMethod(goal - 1, nums);
  }

private:
  int helperMethod(int x, vector<int> nums)
  {

    if (x < 0)
      return 0;

    int res = 0;
    int left = 0, curSum = 0;
    for (int right = 0; right < nums.size(); right++)
    {
      curSum += nums[right];
      while (curSum > x)
      {
        curSum -= nums[left];
        left++;
      }

      res += (right - left + 1);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> nums = {0, 0, 0, 0, 0};
  cout << obj.numSubarraysWithSum(nums, 0) << endl;
  return 0;
}