#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int subsetXORSum(vector<int> &nums)
  {
    int res = 0, n = nums.size();

    vector<vector<int>> subsets;

    subsetLists(nums, 0, n, subsets, {});

    for (auto item : subsets)
    {
      int xorSum = 0;
      for (auto it : item)
        xorSum ^= it;

      res += xorSum;
    }

    return res;
  }

private:
  void subsetLists(vector<int> arr, int i, int n, vector<vector<int>> &subsets, vector<int> list)
  {
    // base case of recursion
    if (i == n)
    {
      subsets.push_back(list);
      return;
    }

    // peak that element into subset
    list.push_back(arr[i]);
    subsetLists(arr, i + 1, n, subsets, list);

    // not peak the element
    list.pop_back();
    subsetLists(arr, i + 1, n, subsets, list);
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {5, 1, 3};
  cout << obj.subsetXORSum(arr) << endl;
  return 0;
}