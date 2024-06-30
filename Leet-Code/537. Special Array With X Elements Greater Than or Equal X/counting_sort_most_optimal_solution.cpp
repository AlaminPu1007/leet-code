#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int specialArray(vector<int> &nums)
  {
    int n = nums.size();

    vector<int> freq(n + 1, 0);

    // count each number frequency through 1 to n
    for (int i = 0; i < n; i++)
    {
      int index = min(n, nums[i]);
      freq[index]++;
    }

    int total_count = 0;

    for (int i = n; i >= 0; i--)
    {
      total_count += freq[i];

      if (total_count == i)
        return i;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {3, 5};
  cout << obj.specialArray(arr) << endl;
  return 0;
}