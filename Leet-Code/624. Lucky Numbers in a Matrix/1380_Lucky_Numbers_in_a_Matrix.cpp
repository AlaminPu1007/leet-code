#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> luckyNumbers(vector<vector<int>> &matrix)
  {
    int n = matrix.size(), m = matrix[0].size();
    vector<int> res;
    unordered_set<int> row, col;

    // iterate over the all row
    for (int i = 0; i < n; i++)
    {
      int minRow = INT_MAX;

      for (int j = 0; j < m; j++)
        minRow = min(minRow, matrix[i][j]);

      row.insert(minRow);
    }

    for (int j = 0; j < m; ++j)
    {
      int maxCol = INT_MIN;

      for (int i = 0; i < n; ++i)
        maxCol = max(maxCol, matrix[i][j]);

      col.insert(maxCol);
    }

    for (auto item : col)
      if (row.find(item) != row.end())
        res.push_back(item);

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> matrix = {
      {3, 7, 8},
      {9, 11, 13},
      {15, 16, 17}};
  vector<int> res = obj.luckyNumbers(matrix);

  for (auto item : res)
    cout << item << " ";

  return 0;
}