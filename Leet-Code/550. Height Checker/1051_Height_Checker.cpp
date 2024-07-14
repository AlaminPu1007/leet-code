#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int heightChecker(vector<int> &heights)
  {
    int n = heights.size();
    vector<int> arr = countingSort(heights);
    int ans = 0;

    for (int i = 0; i < n; i++)
      if (arr[i] != heights[i])
        ans++;

    return ans;
  }

private:
  vector<int> countingSort(vector<int> &arr)
  {
    int n = arr.size();
    vector<int> temp(101, 0);

    // count each item presence/frequency
    for (auto item : arr)
      temp[item] += 1;

    vector<int> expected;

    for (int i = 1; i <= 100; i++)
    {
      int count = temp[i];

      while (count > 0)
      {
        expected.push_back(i);
        count--;
      }
    }
    return expected;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 1, 4, 2, 1, 3};
  cout << obj.heightChecker(arr);
  return 0;
}