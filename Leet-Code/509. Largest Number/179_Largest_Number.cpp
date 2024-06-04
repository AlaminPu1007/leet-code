#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  static bool compare(int a, int b)
  {
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
  }

public:
  string largestNumber(vector<int> &nums)
  {
    int n = nums.size();
    string ans = "";

    sort(nums.begin(), nums.end(), compare);

    for (auto item : nums)
      ans += to_string(item);

    if (ans[0] == '0')
      return "0";

    return ans;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {3, 30, 34, 5, 9};
  cout << obj.largestNumber(arr) << endl;
  return 0;
}