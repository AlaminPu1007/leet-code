#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int specialArray(vector<int> &nums)
  {
    int n = nums.size();

    for (int i = 1; i <= n; i++)
    {
      int count = 0;
      for (int j = 0; j < n; j++)
      {
        if (nums[j] >= i)
          count++;
      }

      if (count == i)
        return i;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {0, 4, 3, 0, 4}; // [4,5,6,7]
  cout << obj.specialArray(arr) << endl;
  return 0;
}