/*
  This solution will give us "Memory Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int ans = 0;

public:
  int findLength(vector<int> &nums1, vector<int> &nums2)
  {
    int n = nums1.size(), m = nums2.size();

    DFS(n, nums1, m, nums2, 0, 0);
    return ans;
  }

private:
  int DFS(int n, vector<int> nums1, int m, vector<int> nums2, int i, int j)
  {
    if (n == i || m == j)
      return 0;

    int count = 0;

    if (nums1[i] == nums2[j])
      count = 1 + DFS(n, nums1, m, nums2, i + 1, j + 1);

    ans = max(ans, count);

    DFS(n, nums1, m, nums2, i + 1, j);
    DFS(n, nums1, m, nums2, i, j + 1);

    return count;
  }
};

int main(void)
{
  Solution obj;

  vector<int> nums1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, nums2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  cout << obj.findLength(nums1, nums2) << endl;
  return 0;
}