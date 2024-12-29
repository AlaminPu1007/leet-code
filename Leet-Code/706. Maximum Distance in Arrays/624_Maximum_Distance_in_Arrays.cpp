#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxDistance(vector<vector<int>> &arrays)
  {
    int n = arrays.size(), m = arrays[0].size();
    int minValue = arrays[0][0], maxValue = arrays[0][m - 1];
    int res = 0;

    for (int i = 1; i < n; i++)
    {
      m = arrays[i].size();

      int current_max = arrays[i][m - 1];
      int current_min = arrays[i][0];

      res = max(res, abs(current_max - minValue));
      res = max(res, abs(current_min - maxValue));

      // updated max, min value
      minValue = min(minValue, current_min);
      maxValue = max(maxValue, current_max);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{3, 4}, {1, 5}};
  cout << obj.maxDistance(arr) << endl;
  return 0;
}