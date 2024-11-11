#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
  {
    int r = rStart, c = cStart;
    int i = 0, step = 1;
    vector<vector<int>> res;

    vector<int> del_row = {0, 1, 0, -1};
    vector<int> del_col = {1, 0, -1, 0};
    /**
     * Analyze a pattern of spiral-matrix
     *
     * At step = 1
     * R -> 1, D -> 1,
     * L -> 2, U -> 2,
     *
     * At step = 2
     * R -> 3, D -> 3,
     * L -> 4, U -> 4,
     */
    // every step is repeat twice
    while (res.size() < rows * cols)
    {
      // Each step needs to be repeated twice, once for each direction
      for (int k = 0; k < 2; k++)
      {

        // now traverse matrix till steps
        for (int j = 0; j < step; j++)
        {
          if (r >= 0 && r < rows && c >= 0 && c < cols)
            res.push_back({r, c});

          // now update (r, c)
          r = del_row[i] + r;
          c = del_col[i] + c;
        }

        // pointer i is for new_del calculations
        // at most 4 direction, i can be overflow, thats why mod it with->4
        i = (i + 1) % 4;
      }
      // Increment step size after completing two directions
      step++;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  int rows = 5, cols = 6, rStart = 1, cStart = 4;
  vector<vector<int>> res = obj.spiralMatrixIII(rows, cols, rStart, cStart);

  for (auto item : res)
  {
    for (auto it : item)
      cout << it << " ";
    cout << endl;
  }

  return 0;
}