#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int beautifulSubsets(vector<int> &nums, int k)
  {
    int n = nums.size();
    unordered_map<int, int> Map;
    int count = 0;
    sort(nums.begin(), nums.end());

    DFS(nums, Map, 0, count, n, k);

    // Removed empty subsequence by subtracting 1
    return count - 1;
  }

private:
  void DFS(vector<int> &nums, unordered_map<int, int> &Map, int i, int &count, int n, int k)
  {
    // We got one subset
    if (i == n)
    {
      count++;
      return;
    }

    // To pick an element
    if (Map[nums[i] - k] == 0)
    {
      Map[nums[i]]++;
      DFS(nums, Map, i + 1, count, n, k);
      Map[nums[i]]--;
    }

    // Choose to not pick the element
    DFS(nums, Map, i + 1, count, n, k);
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 4, 6};
  cout << obj.beautifulSubsets(arr, 2) << endl;
  return 0;
}
