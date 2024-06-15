#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int n = nums.size();
    int positiveIndex = 0, negativeIndex = 1;
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
    {
      if (nums[i] > 0)
      {
        ans[positiveIndex] = nums[i];
        positiveIndex += 2;
      }
      else
      {
        ans[negativeIndex] = nums[i];
        negativeIndex += 2;
      }
    }
    return ans;
  }
};

int main(void)
{
  Solution obj;

  vector<int> arr = {3, 1, -2, -5, 2, -4};
  vector<int> res = obj.rearrangeArray(arr);

  for (auto item : res)
    cout << item << " ";

  return 0;
}