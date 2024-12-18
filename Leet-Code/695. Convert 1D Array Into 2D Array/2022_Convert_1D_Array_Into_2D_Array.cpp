#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
  {
    vector<vector<int>> res;

    if (original.size() != (n * m))
      return {};

    for (int i = 0; i < m; i++)
    {
      int startIdx = i * n;
      int endIdx = startIdx + n;

      vector<int> list;

      for (int j = startIdx; j < endIdx; j++)
      {
        list.push_back(original[j]);
      }

      res.push_back(list);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;

  vector<int> arr = {1, 2, 3, 4};
  int m = 2, n = 2;

  vector<vector<int>> res = obj.construct2DArray(arr, m, n);

  for (auto item : res)
  {
    for (auto it : item)
      cout << it << " ";
    cout << endl;
  }

  return 0;
}