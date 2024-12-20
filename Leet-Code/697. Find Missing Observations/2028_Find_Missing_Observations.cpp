#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> missingRolls(vector<int> &rolls, int mean, int n)
  {
    int m = rolls.size();
    int total_sum = mean * (n + m);
    int sum = 0;

    for (auto item : rolls)
      sum += item;

    int missing_sum = total_sum - sum;

    // (missing_sum > 6 * n) -> is similar to ((missing_sum / n) > 6)
    if ((missing_sum > 6 * n) || missing_sum < n)
      return {};

    vector<int> res;

    while (n > 0)
    {
      int dice = min(6, missing_sum - n + 1);
      res.push_back(dice);
      missing_sum -= dice;

      n--;
    }
    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {3, 2, 4, 3};
  int mean = 4, n = 2;
  vector<int> res = obj.missingRolls(arr, mean, n);

  for (auto item : res)
    cout << item << " ";
  return 0;
}