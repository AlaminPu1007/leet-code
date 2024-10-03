#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findMaxK(vector<int> &nums)
  {
    int n = nums.size();
    unordered_set<int> st(nums.begin(), nums.end());

    int res = -1;

    for (auto item : nums)
      if (st.find(-item) != st.end())
        res = max(res, abs(item));

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {-1, 10, 6, 7, -7, 1};
  cout << obj.findMaxK(arr) << endl;
  return 0;
}